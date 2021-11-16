package encapsulation;

public class EncapTest {
    public static void main(String[] args) {
        
        Person p1 = new Person();
        p1.settName("Saif");
        p1.settAge(22);
        System.out.println("Name : "+p1.getName());
        System.out.println("Age : "+p1.getAge());
        
    }
    
}
