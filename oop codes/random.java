import java.util.Random;

public class random {
    public static void main(String[] args) {
        Random r =new Random(3);
        for(int i=0;i<10;i++)System.out.println(r.nextInt(1000));
        for(int i=0;i<10;i++)System.out.println( 3+(int)(Math.random()*1000));
    }
}
