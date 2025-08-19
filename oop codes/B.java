
// Java program to illustrate Protected Access Modifier
// import required packages
import java.io.*;
import java.util.*;
   
// declaring a parent class A
class A {
     
    // declaring a protected method m1()
    protected void m1() { System.out.println("GFG"); }
}
   
// creating a child class by extending the class A
 public class B extends A {
     
    // main method
    public static void main(String[] args)
    {
        // creating an object of parent class
        // using parent reference
        A a = new A();
         
        /// calling method m1
        a.m1();
         
        // creating an object of child class
        // using child reference
        B b = new B();
         
        // calling method m1
        b.m1();
         
        // creating an object of child class
        // using parent reference
        A a1 = new B();
         
        // calling m1 method
        a1.m1();
    }
}