package javaapplication4;

public class NewClass {
    static void date(int age){
        if (age<18)
            throw new ArithmeticException("Not Allowed");
        else
            System.out.println("Welcome to vote");
    }
    public static void main(String[] args) {
        try{
            date(13);
        }catch(ArithmeticException e){
            System.out.println(e);
        }
        System.out.println("Rest of the code");
    }
}
