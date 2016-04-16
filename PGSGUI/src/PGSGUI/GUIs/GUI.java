package PGSGUI.GUIs;

import PGSGUI.PGSGUI;
import static PGSGUI.PGSGUI.process;
import java.io.BufferedReader;
import java.io.InputStreamReader;

public class GUI extends javax.swing.JFrame {

    public GUI() {
        initComponents();
    }

    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        buttonGroup1 = new javax.swing.ButtonGroup();
        jFrame1 = new javax.swing.JFrame();
        jFrame2 = new javax.swing.JFrame();
        jFrame3 = new javax.swing.JFrame();
        jPanel1 = new javax.swing.JPanel();
        username = new javax.swing.JTextField();
        jLabel1 = new javax.swing.JLabel();
        jLabel2 = new javax.swing.JLabel();
        password = new javax.swing.JPasswordField();
        jTabbedPane1 = new javax.swing.JTabbedPane();
        jPanel2 = new javax.swing.JPanel();
        useCustomWorkloads = new javax.swing.JToggleButton();
        jLabel3 = new javax.swing.JLabel();
        workload = new javax.swing.JTextField();
        useCustomCLSpecs = new javax.swing.JToggleButton();
        jLabel4 = new javax.swing.JLabel();
        clspecs = new javax.swing.JTextField();
        start = new javax.swing.JButton();
        jLabel5 = new javax.swing.JLabel();
        baseDir = new javax.swing.JTextField();
        jLabel6 = new javax.swing.JLabel();
        jarFile = new javax.swing.JTextField();
        jScrollPane1 = new javax.swing.JScrollPane();
        output = new javax.swing.JTextArea();

        org.jdesktop.layout.GroupLayout jFrame1Layout = new org.jdesktop.layout.GroupLayout(jFrame1.getContentPane());
        jFrame1.getContentPane().setLayout(jFrame1Layout);
        jFrame1Layout.setHorizontalGroup(
            jFrame1Layout.createParallelGroup(org.jdesktop.layout.GroupLayout.LEADING)
            .add(0, 400, Short.MAX_VALUE)
        );
        jFrame1Layout.setVerticalGroup(
            jFrame1Layout.createParallelGroup(org.jdesktop.layout.GroupLayout.LEADING)
            .add(0, 300, Short.MAX_VALUE)
        );

        jFrame2.setTitle("Login");

        org.jdesktop.layout.GroupLayout jFrame2Layout = new org.jdesktop.layout.GroupLayout(jFrame2.getContentPane());
        jFrame2.getContentPane().setLayout(jFrame2Layout);
        jFrame2Layout.setHorizontalGroup(
            jFrame2Layout.createParallelGroup(org.jdesktop.layout.GroupLayout.LEADING)
            .add(0, 400, Short.MAX_VALUE)
        );
        jFrame2Layout.setVerticalGroup(
            jFrame2Layout.createParallelGroup(org.jdesktop.layout.GroupLayout.LEADING)
            .add(0, 300, Short.MAX_VALUE)
        );

        org.jdesktop.layout.GroupLayout jFrame3Layout = new org.jdesktop.layout.GroupLayout(jFrame3.getContentPane());
        jFrame3.getContentPane().setLayout(jFrame3Layout);
        jFrame3Layout.setHorizontalGroup(
            jFrame3Layout.createParallelGroup(org.jdesktop.layout.GroupLayout.LEADING)
            .add(0, 400, Short.MAX_VALUE)
        );
        jFrame3Layout.setVerticalGroup(
            jFrame3Layout.createParallelGroup(org.jdesktop.layout.GroupLayout.LEADING)
            .add(0, 300, Short.MAX_VALUE)
        );

        setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);
        setTitle("PGS - Prime Generator Search");

        jPanel1.setToolTipText("Login");
        jPanel1.setName(""); // NOI18N

        username.setToolTipText("Username");

        jLabel1.setText("Username:");

        jLabel2.setText("Password:");

        password.setToolTipText("Password");
        password.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                passwordActionPerformed(evt);
            }
        });

        org.jdesktop.layout.GroupLayout jPanel1Layout = new org.jdesktop.layout.GroupLayout(jPanel1);
        jPanel1.setLayout(jPanel1Layout);
        jPanel1Layout.setHorizontalGroup(
            jPanel1Layout.createParallelGroup(org.jdesktop.layout.GroupLayout.LEADING)
            .add(jPanel1Layout.createSequentialGroup()
                .addContainerGap()
                .add(jPanel1Layout.createParallelGroup(org.jdesktop.layout.GroupLayout.LEADING)
                    .add(jLabel1, org.jdesktop.layout.GroupLayout.PREFERRED_SIZE, 79, org.jdesktop.layout.GroupLayout.PREFERRED_SIZE)
                    .add(jLabel2))
                .addPreferredGap(org.jdesktop.layout.LayoutStyle.RELATED)
                .add(jPanel1Layout.createParallelGroup(org.jdesktop.layout.GroupLayout.LEADING, false)
                    .add(username)
                    .add(password, org.jdesktop.layout.GroupLayout.DEFAULT_SIZE, 180, Short.MAX_VALUE))
                .addContainerGap(org.jdesktop.layout.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
        );
        jPanel1Layout.setVerticalGroup(
            jPanel1Layout.createParallelGroup(org.jdesktop.layout.GroupLayout.LEADING)
            .add(jPanel1Layout.createSequentialGroup()
                .addContainerGap()
                .add(jPanel1Layout.createParallelGroup(org.jdesktop.layout.GroupLayout.BASELINE)
                    .add(jLabel1, org.jdesktop.layout.GroupLayout.PREFERRED_SIZE, 29, org.jdesktop.layout.GroupLayout.PREFERRED_SIZE)
                    .add(username))
                .addPreferredGap(org.jdesktop.layout.LayoutStyle.UNRELATED)
                .add(jPanel1Layout.createParallelGroup(org.jdesktop.layout.GroupLayout.BASELINE)
                    .add(jLabel2)
                    .add(password, org.jdesktop.layout.GroupLayout.PREFERRED_SIZE, org.jdesktop.layout.GroupLayout.DEFAULT_SIZE, org.jdesktop.layout.GroupLayout.PREFERRED_SIZE))
                .addContainerGap(org.jdesktop.layout.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
        );

        password.getAccessibleContext().setAccessibleName("Password");

        useCustomWorkloads.setText("Custom Workloads");
        useCustomWorkloads.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                useCustomWorkloadsActionPerformed(evt);
            }
        });

        jLabel3.setText("CLSpecs:");

        workload.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                workloadActionPerformed(evt);
            }
        });

        useCustomCLSpecs.setText("Custom CLSpecs");
        useCustomCLSpecs.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                useCustomCLSpecsActionPerformed(evt);
            }
        });

        jLabel4.setText("Workload:");

        start.setText("Start");
        start.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mouseClicked(java.awt.event.MouseEvent evt) {
                startMouseClicked(evt);
            }
        });

        jLabel5.setText("Jar File:");

        baseDir.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                baseDirActionPerformed(evt);
            }
        });

        jLabel6.setText("Base Dir:");

        jarFile.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jarFileActionPerformed(evt);
            }
        });

        output.setColumns(20);
        output.setRows(5);
        jScrollPane1.setViewportView(output);

        org.jdesktop.layout.GroupLayout jPanel2Layout = new org.jdesktop.layout.GroupLayout(jPanel2);
        jPanel2.setLayout(jPanel2Layout);
        jPanel2Layout.setHorizontalGroup(
            jPanel2Layout.createParallelGroup(org.jdesktop.layout.GroupLayout.LEADING)
            .add(jPanel2Layout.createSequentialGroup()
                .addContainerGap()
                .add(jPanel2Layout.createParallelGroup(org.jdesktop.layout.GroupLayout.LEADING)
                    .add(jPanel2Layout.createSequentialGroup()
                        .add(jPanel2Layout.createParallelGroup(org.jdesktop.layout.GroupLayout.LEADING)
                            .add(jPanel2Layout.createSequentialGroup()
                                .add(jLabel5, org.jdesktop.layout.GroupLayout.PREFERRED_SIZE, 72, org.jdesktop.layout.GroupLayout.PREFERRED_SIZE)
                                .add(18, 18, 18)
                                .add(jarFile))
                            .add(jPanel2Layout.createSequentialGroup()
                                .add(jPanel2Layout.createParallelGroup(org.jdesktop.layout.GroupLayout.TRAILING, false)
                                    .add(start, org.jdesktop.layout.GroupLayout.DEFAULT_SIZE, org.jdesktop.layout.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                                    .add(useCustomCLSpecs, org.jdesktop.layout.GroupLayout.DEFAULT_SIZE, org.jdesktop.layout.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                                    .add(useCustomWorkloads, org.jdesktop.layout.GroupLayout.DEFAULT_SIZE, org.jdesktop.layout.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
                                .add(18, 18, 18)
                                .add(jPanel2Layout.createParallelGroup(org.jdesktop.layout.GroupLayout.LEADING, false)
                                    .add(jLabel4, org.jdesktop.layout.GroupLayout.DEFAULT_SIZE, 79, Short.MAX_VALUE)
                                    .add(jLabel3, org.jdesktop.layout.GroupLayout.DEFAULT_SIZE, org.jdesktop.layout.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
                                .addPreferredGap(org.jdesktop.layout.LayoutStyle.RELATED)
                                .add(jPanel2Layout.createParallelGroup(org.jdesktop.layout.GroupLayout.LEADING)
                                    .add(workload)
                                    .add(clspecs))))
                        .add(32, 32, 32))
                    .add(jPanel2Layout.createSequentialGroup()
                        .add(jLabel6, org.jdesktop.layout.GroupLayout.PREFERRED_SIZE, 72, org.jdesktop.layout.GroupLayout.PREFERRED_SIZE)
                        .add(18, 18, 18)
                        .add(baseDir, org.jdesktop.layout.GroupLayout.PREFERRED_SIZE, 394, org.jdesktop.layout.GroupLayout.PREFERRED_SIZE)
                        .addPreferredGap(org.jdesktop.layout.LayoutStyle.RELATED, 18, Short.MAX_VALUE)))
                .add(jScrollPane1, org.jdesktop.layout.GroupLayout.PREFERRED_SIZE, 490, org.jdesktop.layout.GroupLayout.PREFERRED_SIZE)
                .addContainerGap())
        );
        jPanel2Layout.setVerticalGroup(
            jPanel2Layout.createParallelGroup(org.jdesktop.layout.GroupLayout.LEADING)
            .add(jPanel2Layout.createSequentialGroup()
                .addContainerGap()
                .add(jPanel2Layout.createParallelGroup(org.jdesktop.layout.GroupLayout.LEADING)
                    .add(jPanel2Layout.createSequentialGroup()
                        .add(jPanel2Layout.createParallelGroup(org.jdesktop.layout.GroupLayout.BASELINE)
                            .add(jLabel5, org.jdesktop.layout.GroupLayout.PREFERRED_SIZE, 29, org.jdesktop.layout.GroupLayout.PREFERRED_SIZE)
                            .add(jarFile, org.jdesktop.layout.GroupLayout.PREFERRED_SIZE, org.jdesktop.layout.GroupLayout.DEFAULT_SIZE, org.jdesktop.layout.GroupLayout.PREFERRED_SIZE))
                        .addPreferredGap(org.jdesktop.layout.LayoutStyle.RELATED)
                        .add(jPanel2Layout.createParallelGroup(org.jdesktop.layout.GroupLayout.BASELINE)
                            .add(jLabel6, org.jdesktop.layout.GroupLayout.PREFERRED_SIZE, 29, org.jdesktop.layout.GroupLayout.PREFERRED_SIZE)
                            .add(baseDir, org.jdesktop.layout.GroupLayout.PREFERRED_SIZE, org.jdesktop.layout.GroupLayout.DEFAULT_SIZE, org.jdesktop.layout.GroupLayout.PREFERRED_SIZE))
                        .addPreferredGap(org.jdesktop.layout.LayoutStyle.RELATED)
                        .add(jPanel2Layout.createParallelGroup(org.jdesktop.layout.GroupLayout.BASELINE)
                            .add(jLabel4)
                            .add(workload, org.jdesktop.layout.GroupLayout.PREFERRED_SIZE, org.jdesktop.layout.GroupLayout.DEFAULT_SIZE, org.jdesktop.layout.GroupLayout.PREFERRED_SIZE)
                            .add(useCustomWorkloads))
                        .addPreferredGap(org.jdesktop.layout.LayoutStyle.RELATED)
                        .add(jPanel2Layout.createParallelGroup(org.jdesktop.layout.GroupLayout.BASELINE)
                            .add(useCustomCLSpecs)
                            .add(jLabel3)
                            .add(clspecs, org.jdesktop.layout.GroupLayout.PREFERRED_SIZE, org.jdesktop.layout.GroupLayout.DEFAULT_SIZE, org.jdesktop.layout.GroupLayout.PREFERRED_SIZE))
                        .addPreferredGap(org.jdesktop.layout.LayoutStyle.RELATED, 189, Short.MAX_VALUE)
                        .add(start))
                    .add(jScrollPane1))
                .addContainerGap())
        );

        jLabel6.getAccessibleContext().setAccessibleDescription("Where the base directory for workloads and specs is located");

        jTabbedPane1.addTab("PGS", jPanel2);

        org.jdesktop.layout.GroupLayout layout = new org.jdesktop.layout.GroupLayout(getContentPane());
        getContentPane().setLayout(layout);
        layout.setHorizontalGroup(
            layout.createParallelGroup(org.jdesktop.layout.GroupLayout.LEADING)
            .add(layout.createSequentialGroup()
                .addContainerGap()
                .add(layout.createParallelGroup(org.jdesktop.layout.GroupLayout.LEADING)
                    .add(layout.createSequentialGroup()
                        .add(jTabbedPane1, org.jdesktop.layout.GroupLayout.PREFERRED_SIZE, 1024, org.jdesktop.layout.GroupLayout.PREFERRED_SIZE)
                        .add(0, 0, Short.MAX_VALUE))
                    .add(jPanel1, org.jdesktop.layout.GroupLayout.DEFAULT_SIZE, org.jdesktop.layout.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
                .addContainerGap())
        );
        layout.setVerticalGroup(
            layout.createParallelGroup(org.jdesktop.layout.GroupLayout.LEADING)
            .add(layout.createSequentialGroup()
                .addContainerGap()
                .add(jPanel1, org.jdesktop.layout.GroupLayout.PREFERRED_SIZE, org.jdesktop.layout.GroupLayout.DEFAULT_SIZE, org.jdesktop.layout.GroupLayout.PREFERRED_SIZE)
                .add(18, 18, 18)
                .add(jTabbedPane1, org.jdesktop.layout.GroupLayout.PREFERRED_SIZE, 415, org.jdesktop.layout.GroupLayout.PREFERRED_SIZE)
                .addContainerGap(org.jdesktop.layout.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
        );

        jPanel1.getAccessibleContext().setAccessibleName("Login");
        jPanel1.getAccessibleContext().setAccessibleDescription("The login pane");

        pack();
    }// </editor-fold>//GEN-END:initComponents

    private void passwordActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_passwordActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_passwordActionPerformed

    private void useCustomWorkloadsActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_useCustomWorkloadsActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_useCustomWorkloadsActionPerformed

    private void useCustomCLSpecsActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_useCustomCLSpecsActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_useCustomCLSpecsActionPerformed

    private void workloadActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_workloadActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_workloadActionPerformed
    /*
    
    This is the method that is called when they click the start button
    
     */
    private void startMouseClicked(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_startMouseClicked
        //A command to run from system, to call our JPGS jar file
        output.setText("");
        PGSGUI.process.destroyForcibly();
        try {
            ProcessBuilder builder = new ProcessBuilder("java", "-jar", jarFile.getText(), workload.getText(), clspecs.getText());
            PGSGUI.process = builder.start();
            final Thread ioThread = new Thread() {
                @Override
                public void run() {
                    try {
                        final BufferedReader reader = new BufferedReader(
                                new InputStreamReader(process.getInputStream()));
                        String line = null;
                        while ((line = reader.readLine()) != null) {
                            output.append(line + "\n");
                        }
                        reader.close();
                    } catch (final Exception e) {
                        e.printStackTrace();
                    }
                }
            };
            ioThread.start();
        } catch (Exception ex) {
            output.append("Errored\n");
        }
    }//GEN-LAST:event_startMouseClicked

    private void baseDirActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_baseDirActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_baseDirActionPerformed

    private void jarFileActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jarFileActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_jarFileActionPerformed

    /**
     * @param args the command line arguments
     */
    public static void run() {
        /* Set the Nimbus look and feel */
        //<editor-fold defaultstate="collapsed" desc=" Look and feel setting code (optional) ">
        /* If Nimbus (introduced in Java SE 6) is not available, stay with the default look and feel.
         * For details see http://download.oracle.com/javase/tutorial/uiswing/lookandfeel/plaf.html 
         */
        try {
            javax.swing.UIManager.LookAndFeelInfo[] installedLookAndFeels = javax.swing.UIManager.getInstalledLookAndFeels();
            for (int idx = 0; idx < installedLookAndFeels.length; idx++) {
                if ("Nimbus".equals(installedLookAndFeels[idx].getName())) {
                    javax.swing.UIManager.setLookAndFeel(installedLookAndFeels[idx].getClassName());
                    break;
                }
            }
        } catch (ClassNotFoundException ex) {
            java.util.logging.Logger.getLogger(GUI.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (InstantiationException ex) {
            java.util.logging.Logger.getLogger(GUI.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (IllegalAccessException ex) {
            java.util.logging.Logger.getLogger(GUI.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (javax.swing.UnsupportedLookAndFeelException ex) {
            java.util.logging.Logger.getLogger(GUI.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        }
        //</editor-fold>

        java.awt.EventQueue.invokeLater(new Runnable() {
            public void run() {
                new GUI().setVisible(true);
            }
        });
    }

    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JTextField baseDir;
    private javax.swing.ButtonGroup buttonGroup1;
    private javax.swing.JTextField clspecs;
    private javax.swing.JFrame jFrame1;
    private javax.swing.JFrame jFrame2;
    private javax.swing.JFrame jFrame3;
    private javax.swing.JLabel jLabel1;
    private javax.swing.JLabel jLabel2;
    private javax.swing.JLabel jLabel3;
    private javax.swing.JLabel jLabel4;
    private javax.swing.JLabel jLabel5;
    private javax.swing.JLabel jLabel6;
    private javax.swing.JPanel jPanel1;
    private javax.swing.JPanel jPanel2;
    private javax.swing.JScrollPane jScrollPane1;
    private javax.swing.JTabbedPane jTabbedPane1;
    private javax.swing.JTextField jarFile;
    private javax.swing.JTextArea output;
    private javax.swing.JPasswordField password;
    private javax.swing.JButton start;
    private javax.swing.JToggleButton useCustomCLSpecs;
    private javax.swing.JToggleButton useCustomWorkloads;
    private javax.swing.JTextField username;
    private javax.swing.JTextField workload;
    // End of variables declaration//GEN-END:variables

}
