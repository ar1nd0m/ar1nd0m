import java.util.*;
public class compute_area {
    public static void main(String[] args){
        try(Scanner input=new Scanner(System.in)){//creates a object of input data 
        double r1 = input.nextDouble();//try is used to close the object automatically
        final double pi = Math.PI;
        double compute_area = pi*Math.pow(r1,2.0);
        System.out.println(compute_area); 
}
}
}
