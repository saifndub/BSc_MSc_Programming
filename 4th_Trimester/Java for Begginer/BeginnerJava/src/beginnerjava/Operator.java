package beginnerjava;

import java.util.Scanner;


public class Operator {
     public static void main(String[] args){
        
        Scanner saif = new Scanner(System.in);
        //Scanner inp = new Scanner(System.in);
        //int number ;
        
        int num1,num2;
        System.out.print("Enter First Number : ");
        num1 = saif.nextInt();
        System.out.print("Enter Second Number : ");
        num2 = saif.nextInt();
        
        double result = (double) num1 / num2 ;
         System.out.println(result);
        /* System.out.print("Enter any number : ");
        number = inp.nextInt();
        System.out.println("The Number is = "+number);
        */
    }
    
}
