class myExcaption extends RuntimeException{
    public myExcaption(String a){
        super(a);
    }
}
public class eception {

    public static void main(String[] args) {
        int i=20;
        int j=0;
        try{
            j=18/i;
            if(j == 0)throw new myExcaption("i dont to want print zero");
        }
        catch(ArithmeticException e){
            j=18/1;
            System.out.println("this is a arithmeticException   "+e);
        }
        catch(Exception e){
            System.out.println("something went wrong");
        }
    }
}
