package com.mycompany.app;

import java.io.*;
import javax.swing.*;
import java.util.concurrent.*;

/**
 * Hello world!
 */
public class App {
   public native String sayHello();
   public native int connect(String address, int port);
   public native boolean send(int fd, byte[] data);
   public native byte[] receive(int fd);
   public native boolean close(int fd);
   static {
       System.loadLibrary("native");
   }

    public static void main(String[] args) {
        System.out.println("App is running!");
        System.out.println("In this Program we will learn about Java Native");
        App app = new App();
        ScheduledExecutorService scheduler = Executors.newScheduledThreadPool(10);
	Runnable task = () -> {
		System.out.println("Receiving data....");
                int fd = app.connect("/dev/pts/1", 1511619);
  		byte[] byteArray = app.receive(fd);
		System.out.println("Received data, serializing...."); 
		StringBuilder hexString = new StringBuilder();
		for (byte b : byteArray) {
    			hexString.append(String.format("%02X", b));
		}
		System.out.println("Serialized done....");
		System.out.println("Data: "+hexString.toString());
                app.close(fd);
	};
	scheduler.scheduleAtFixedRate (task, 1, 1, TimeUnit.SECONDS);

        // Creating instance of JFrame
        JFrame frame = new JFrame();

        // Creating instance of JButton
        JButton button = new JButton(" GFG WebSite Click");

        // x axis, y axis, width, height
        button.setBounds(150, 200, 220, 50);

        
        // adding= button in JFrame
        frame.add(button);

        // 400 width and 500 height
        frame.setSize(500, 600);

        // using no layout managers
        frame.setLayout(null);

        // making the frame visible
        frame.setVisible(true);

    }
}
