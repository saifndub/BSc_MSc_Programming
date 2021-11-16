package oop;

public class L84_Teacher {
    String name , gender ;
    int phone ;
    
        //not method , it is a parametrized constractor  
    L84_Teacher(String a , String b , int c){
        name = a;
        gender = b ;
        phone = c;
    }
    
            //non-parametrized or normal method
    void displayinfo(){
        System.out.println("Name :"+name);
        System.out.println("Gender :"+gender);
        System.out.println("Phone :"+phone);
        System.out.println("\n\n");
    }
    
}
