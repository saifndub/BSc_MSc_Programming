package L_111_inheriting_private_member;

public class Test {
    
    public static void main(String[] args) {
        
        Teacher t1 = new Teacher();
        t1.setName("Md. Saif");
        t1.setAge(22);
        t1.setQualification("BSc in CSE");
        
        t1.displayinfo();
        
        Teacher t2 = new Teacher();
        t2.setName("Md. Saiful");
        t2.setAge(25);
        t2.setQualification("MSc in CSE");
        
        t2.displayinfo();
    }
    
}
