import java.util.*;
public class ComputeLoan {
    public static void main(String[] args){
        Scanner input= new Scanner(System.in);
        System.out.println("input annual interest rate:");
        double interestRate=input.nextDouble();
        double m_interestRate=interestRate/1200;
        System.out.println("input loanAmount:");
        double loanAmount=input.nextInt();

        System.out.println("input NumberOfYear:");
        int NumberOfYear=input.nextInt();

        double down = (1-(1.0/(Math.pow((1+m_interestRate), NumberOfYear*12))));
        double Monthly_payment=(m_interestRate*loanAmount)/down;
        double total_payment= Monthly_payment*NumberOfYear*12;

        System.out.printf("monthly payment is %.2f\n", Monthly_payment);
        System.out.printf("total payment is: %.2f\n",total_payment);
    }
}
