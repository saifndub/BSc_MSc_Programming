package beginnerjava;

import java.util.Scanner;

public class LoopDemo {
    public static void main(String[] args) {
        Scanner saif = new Scanner(System.in);
        int sum = 0;
        int m,n;
        
        System.out.print("Enter Initial Number :");
        m = saif.nextInt();
        System.out.print("Enter Final Number :");
        n = saif.nextInt();
        
        for (int i = m; i <= n; i++) {
            
            if(i%2==0){
                sum = sum + i;
                System.out.print("\t"+i);
            }               
        }
        System.out.println("\nThe sum is :"+sum);
        
    }
    
}
