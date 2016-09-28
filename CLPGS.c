#include <stdio.h>
#include <stdlib.h>
#include <png.h>

#ifdef __APPLE__
#include <OpenCL/opencl.h>
#else
#include <CL/cl.h>
#endif
 
#include <math.h>

#define MAX_SOURCE_SIZE (0x100000)

cl_device_id device_id = NULL;
cl_context context = NULL;
cl_command_queue command_queue = NULL;
cl_program program = NULL;
cl_kernel kernel = NULL;
cl_platform_id platform_id = NULL;
cl_uint ret_num_devices;
cl_uint ret_num_platforms;
cl_int ret;


size_t *global_item_size;
size_t *local_item_size;
size_t *offset;

//Buffers
int * data;
cl_mem data_buf = NULL;

const int NUM_READS = 2000000000 / 32;


void get_primes(char *fn) {
    //How many reads
    FILE *f = fopen(fn, "r");
    data = (int *)malloc(sizeof(int) * NUM_READS);
    printf("Init prime buf\n");
    int i;
    for (i = 0; i < NUM_READS; ++i) {
        fread(&data[i], sizeof(int), 1, f);
    }
    fclose(f);
}

//Call the program with ./CLPGS.o range0 range1 range2 offset0 offset1 offset2
void init(char *argv[]) {
	global_item_size = (size_t *)malloc(sizeof(size_t) * 3);
	local_item_size = (size_t *)malloc(sizeof(size_t) * 3);
	offset = (size_t *)malloc(sizeof(size_t) * 3);
	local_item_size[0] = 4;
	local_item_size[1] = 4;
	local_item_size[2] = 4;
	get_primes(argv[1]);
	global_item_size[0] = strtol(argv[2], NULL, 0);
	global_item_size[1] = strtol(argv[3], NULL, 0);
	global_item_size[2] = strtol(argv[4], NULL, 0);
	offset[0] = strtol(argv[5], NULL, 0);
	offset[1] = strtol(argv[6], NULL, 0);
	offset[2] = strtol(argv[7], NULL, 0);
}

int chbit(int x, int b) {
    return (x >> b) & 1;
}
int main(int argc, char *argv[])
{
	FILE *fp;
	char fileName[] = "./kernel.cl";
	char *source_str;
	size_t source_size;
	
	/* Load the source code containing the kernel*/
	fp = fopen(fileName, "r");
	if (!fp) {
		fprintf(stderr, "Failed to load kernel.\n");
		exit(1);
	}
	source_str = (char*)malloc(MAX_SOURCE_SIZE);
	source_size = fread(source_str, 1, MAX_SOURCE_SIZE, fp);
	fclose(fp);
	
	/* Get Platform and Device Info */
	ret = clGetPlatformIDs(1, &platform_id, &ret_num_platforms);
	
	//Get device ID's'
	ret = clGetDeviceIDs(platform_id, CL_DEVICE_TYPE_ALL, 1, &device_id, &ret_num_devices);
	
	/* Create OpenCL context */
	context = clCreateContext(NULL, 1, &device_id, NULL, NULL, &ret);
	
	/* Create Command Queue */
	command_queue = clCreateCommandQueue(context, device_id, CL_QUEUE_OUT_OF_ORDER_EXEC_MODE_ENABLE, &ret);

	/* Create Kernel Program from the source */
	program = clCreateProgramWithSource(context, 1, (const char **)&source_str, (const size_t *)&source_size, &ret);

	/* Build Kernel Program */
	ret = clBuildProgram(program, 1, &device_id, NULL, NULL, NULL);

	/* Create OpenCL Kernel */
	kernel = clCreateKernel(program, "test_quadratics", &ret);

	init(argv);

	printf("Running PGS\n");

	/* Create Buffers */
	data_buf = clCreateBuffer(context, CL_MEM_READ_WRITE, NUM_READS * sizeof(int), NULL, &ret);

	ret = clEnqueueWriteBuffer(command_queue, data_buf, CL_TRUE, 0, NUM_READS * sizeof(int), data, 0, NULL, NULL);

	ret = clSetKernelArg(kernel, 0, sizeof(cl_mem), (void *)&data_buf);

	ret = clEnqueueNDRangeKernel(command_queue, kernel, 3, offset, global_item_size, local_item_size, 0, NULL, NULL);

	printf("\nDone.\n");

	/* Finalization */
	ret = clFlush(command_queue);
	ret = clFinish(command_queue);
	ret = clReleaseKernel(kernel);
	ret = clReleaseProgram(program);
	ret = clReleaseMemObject(data_buf);
	ret = clReleaseCommandQueue(command_queue);
	ret = clReleaseContext(context);
	
	free(source_str);
	
	return 0;
}