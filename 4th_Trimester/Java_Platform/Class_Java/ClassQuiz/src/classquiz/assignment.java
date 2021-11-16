package classquiz;

import java.util.Scanner;

//Name : Md Saif Hossain
//Id : 173120001

public class assignment {

    public static void main(String[] args) 
                                throws java.lang.Exception
            {

        Scanner saif = new Scanner(System.in);

        double[] s1 = new double[100];
        int i = 0, count = 4;

        System.out.println("Enter four number : ");
        try {
            for (i = 0; i < count; i++) {
                s1[i] = saif.nextDouble();
                if(s1[i]==0){
                    throw new Exception();
                }
            }
            for (i = 0; i < count; i++) {
                s1[i + 1] = s1[i] * s1[i + 1];
            }
            System.out.println(s1[i - 1]);
            
        } catch (Exception e) {
            System.out.println("Input number can't be zero.");

        }
        
    }
}