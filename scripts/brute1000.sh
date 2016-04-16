#This is our config file! you should change it for your own directories
source __config.sh
#Change this to whatever workload you want
WORKLOAD=$WORKLOAD_DIR"brute1000"
#These are the specifications of the CL device you'd like
CLSPECS=$CLSPECS_DIR"CPU"

java -jar $JAR_LIVE $WORKLOAD $CLSPECS
