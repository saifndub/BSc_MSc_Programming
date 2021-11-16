package oop;

public class L83_Teacher {
    String name , gender ;
    int phone ;
    
            //parametrized method
    void setinfo(String n , String m , int ph){
        name = n;
        gender = m ;
        phone = ph;
    }
    
            //non-parametrized or normal method
    void displayinfo(){
        System.out.println("Name :"+name);
        System.out.println("Gender :"+gender);
        System.out.println("Phone :"+phone);
    }
    
}
