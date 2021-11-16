package Overloading_Constructor;

public class OverloadingConstructorTest {
    public static void main(String[] args) {
        
        Teacher teacher1 = new Teacher();
        Teacher teacher2 = new Teacher("Saif","Male");
        teacher2.displayinfo();
        Teacher teacher3 = new Teacher("Lisa","female",1687889984);
        teacher3.displayinfo();
    }
    
}
