import java.util.*;
public class SubstractionQuiz {
    public static void main(String[] args){
        int n1= (int)(Math.random()*10);
        int n2= (int)(Math.random()*10);
        Scanner input=new Scanner(System.in);
        System.out.printf("what is  %d - %d=",n1,n2);
        int ans= input.nextInt();
        if(n1-n2 == ans){
            System.out.println("\nYou are correct!");
        }else System.out.println("\nyou are wrong!");
    }
}
