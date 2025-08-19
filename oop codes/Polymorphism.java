/*
In this code, multiple functions have the same name but accept different parameters. 
This is an example of polymorphism, specifically function overloading.
Function overloading allows multiple functions with the same name to coexist,
as long as they differ in the number or type of their parameters.
*/

public class Polymorphism{
    static void p(String name,int age){
        System.out.println(name + age);
    }
    static void p(String name){
        System.out.println(name);
    }
    public static void main(String[] args) {
        p("arindam");
        p("arindam",34);
    }
}