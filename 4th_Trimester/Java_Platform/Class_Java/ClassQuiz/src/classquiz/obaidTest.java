package ClassQuiz;

import java.util.Scanner;

public class obaidTest {

    public static void main(String[] args) {
        System.out.println("Enter the first string ");
        Scanner in = new Scanner(System.in);
        String s1 = in.nextLine();

        System.out.println("Enter the second string ");
        String s2 = in.nextLine();

        int index = s1.indexOf(s2);

        int Length = s2.length();

        while (index >= 0) {
            System.out.println(index);
            index = s1.indexOf(s2, index + Length);
        }

        /* int i=0;
     while(( i=(s2.indexOf(s1,i)+1))>0){
            System.out.println(i);}*/
    }
}
