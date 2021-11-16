package inheritance;

public class Test {
    public static void main(String[] args) {
        
        Teacher t1 = new Teacher();
        Teacher t2 = new Teacher();
        
        t1.name = "Md. Saif Hossain";
        t1.age = 22;
        t1.qualification = "BSc in CSE";
        t1.displayinfo2();
       
        t2.name = "Md. Saiful Islam";
        t2.age = 28;
        t2.qualification = "MSc in CSE";
        t2.displayinfo2();
        
        
    }
    
}
