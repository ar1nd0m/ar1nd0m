//it is a example of a Hierarchical inheritance where animal is the superclass and dog,bird are the subclass 
class animal{
    public void walk(){
        System.out.println("i am a animal");
    }
}
class human extends animal{
    public void walk(){
        System.out.println("can walk");
    }
}
class bird extends animal{
    public void walk(){
        System.out.println("can fly");
    }
}
public class HierarchicalInheritance {
    public static void main(String[] args) {
        human d= new human();
        d.walk();
        bird b = new bird();
        b.walk();
    
    }
}
