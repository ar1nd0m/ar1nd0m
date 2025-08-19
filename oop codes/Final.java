// Java program to illustrate Final keyword

// import required packages
import java.io.*;
import java.util.*;
// Declaring parent class P
class P {
	// Declaring a first name
	// method
	public void firstName()
	{
		// Display firstname
		System.out.println("Rahul ");
	}
	/// Declaring a final surName
	// method
	public final void surName()
	{
		// Display surname
		System.out.println("Trivedi");
	}
}
// Creating a child class
// of above parent class
class Final extends P {
	// overriding the surName
	// method
	public void surName()
	{
		// Display surname
		System.out.println("Sharma");
	}
	// Main method
	public static void main(String[] args)
	{
		// Display message
		System.out.println("GFG");
	}
}
