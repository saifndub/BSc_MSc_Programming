package oop;

//import oop.L81_Teacher;

public class L81_Test {
    public static void main(String[] args) {
        
        L81_Teacher teacher1 ;  //object declare
        teacher1 = new L81_Teacher();   //creating object
        
            //object initializing
        teacher1.name = "Md. Saif Hossain";
        teacher1.gender = "Male";
        teacher1.phone = 1770805875;
        
        System.out.println("Name :"+teacher1.name);
        System.out.println("Gender :"+teacher1.gender);
        System.out.println("Phone :"+teacher1.phone);
        System.out.println("\n");
        
        
        L81_Teacher teacher2 ;  //object declare
        teacher2 = new L81_Teacher();   //creating object
        
        teacher2.name = "Md. Saiful Islam";
        teacher2.gender = "Male";
        teacher2.phone = 1748681725;
        
        System.out.println("Name :"+teacher2.name);
        System.out.println("Gender :"+teacher2.gender);
        System.out.println("Phone :"+teacher2.phone);
       
    }
    
}