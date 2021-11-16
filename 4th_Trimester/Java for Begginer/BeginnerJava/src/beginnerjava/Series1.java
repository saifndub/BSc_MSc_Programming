package beginnerjava;

import java.util.Scanner;

public class Series1 {
    public static void main(String[] args) {
        Scanner saif = new Scanner(System.in);
        int n,sum = 0;
        
        System.out.print("Enter the last number :");
        n = saif.nextInt();
        
        for (int i = 1; i <= n; i=i+2) {
            System.out.print(i+" ");
            sum = sum + i;           
           // sum = sum + i*i;           
        }
        System.out.println("\nSum = "+sum);
        
    }
    
}
