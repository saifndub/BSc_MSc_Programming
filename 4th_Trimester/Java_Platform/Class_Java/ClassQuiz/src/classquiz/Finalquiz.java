package classquiz;

import java.util.Scanner;

public class Finalquiz {

    public static void main(String[] args) {
        // TODO code application logic here

              Scanner saif = new Scanner(System.in);
              
        String[] s1 = new String[100];
        int count ;
        int i;
        
        count = saif.nextInt();
        
        for (i = 0; i < count; i++) {
                    s1[i] = saif.nextLine();
             
                   // System.out.println(s1[i]);
        }
        for (i = 0; i < count; i++) {
                  //System.out.println(s1[i]);
                  s1[i+1] = s1[i]+"_"+s1[i+1];
        }
        System.out.println(s1[i-1]);
    }
    
}
