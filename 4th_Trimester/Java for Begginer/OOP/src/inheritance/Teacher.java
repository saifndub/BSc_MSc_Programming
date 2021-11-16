package inheritance;

public class Teacher extends Person{
    
    //name,age,displayinfo()
    String qualification;
    
    void displayinfo2(){
        displayinfo1();
        System.out.println("Qualification : "+qualification);
        System.out.println();
    }
}
