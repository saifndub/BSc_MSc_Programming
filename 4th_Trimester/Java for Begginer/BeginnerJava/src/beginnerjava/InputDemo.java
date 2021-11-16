package beginnerjava;

import java.util.Scanner;

public class InputDemo {
    public static void main(String[] args){
        
        Scanner inp = new Scanner(System.in);
        //Scanner inp = new Scanner(System.in);
        //int number ;
        
        String name;
        System.out.print("Enter your name : ");
        name = inp.nextLine();
        System.out.println("Welcome"+name);
        
       /* System.out.print("Enter any number : ");
        number = inp.nextInt();
        System.out.println("The Number is = "+number);
        */
    }
}
