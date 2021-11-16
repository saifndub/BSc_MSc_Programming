package classquiz;

import java.util.Scanner;

public class PalindromeString {

    public static void checkPalindrome(String s) {
        // reverse the given String 
        String reverse = new StringBuffer(s).reverse().toString();

        // check whether the string is palindrome or not 
        if (s.equals(reverse)) {
            System.out.println("Yes....This word is Pallindrome Word");
        } else {
            System.out.println("No....This word isn't Pallindrome Word");
        }
    }

    public static void main(String[] args)
            throws java.lang.Exception {
        Scanner saif = new Scanner(System.in);
        String word;
        System.out.print("Enter  A  Word : ");
        word = saif.next();
        System.out.println("");
        checkPalindrome(word);

    }
}
