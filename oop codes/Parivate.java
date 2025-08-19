// Java Program to illustrate Private Access Modifier
 
// Importing required packages
import java.io.*;
import java.util.*;
 
// Class 1
// Helper class
class A {
 
    // Method of this class
    private void m1() {
 
        // Print statement whenever this method is called
        System.out.println("GFG");
    }
}
 
// Class 2
// Main class
class B {
 
    // Main driver method
    public static void main(String[] args) {
        // Creating an object of above class
        A a = new A();
 
        // Accessing the method m1() of above class
        // by creating object of above class in
        // main() method of this class
        a.m1();
    }
}