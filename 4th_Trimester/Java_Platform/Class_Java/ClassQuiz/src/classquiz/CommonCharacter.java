package classquiz;

import java.util.Scanner;

public class CommonCharacter {
 
    public static void main(String[] args)
                        throws java.lang.Exception
    {
        
        Scanner saif = new Scanner(System.in);
       
        String s1,s2;
        int count = 0 ;
        
        System.out.print("Enter 1st String : ");
        s1 = saif.nextLine();
        System.out.print("Enter 2nd String : ");
        s2 = saif.nextLine();
        
        for(int i = 0;i < s1.length();i++){
                for(int j =0;j < s2.length();j++){
                    if(s1.charAt(i) == s2.charAt(j)){
                        count++;
                    }
                }
            }
            
        System.out.println("Number of common character between two string :"+count);
        
    }
}
