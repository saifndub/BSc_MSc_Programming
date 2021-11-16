package oop;

//import oop.L81_Teacher;

public class L83_Test {
    public static void main(String[] args) {
        
        L83_Teacher teacher1 ;  //object declare
        teacher1 = new L83_Teacher();   //creating object
        
        teacher1.setinfo("Md. Saif Hossain","Male",1770805875); //initializing object
        teacher1.displayinfo();
               
        L83_Teacher teacher2 ;  //object declare
        teacher2 = new L83_Teacher();   //creating object
        
        teacher2.setinfo("Md. Saiful Islam","Male",1748681725);
        teacher2.displayinfo();
       
    }
    
}