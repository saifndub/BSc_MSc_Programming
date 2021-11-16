package static_keyword;

public class Student {
    
    String name;
    int id;
    static String university = "NDUB";
    
    Student(String n,int i){
        
        name = n;
        id = i;
    }
    void displayinfo(){
        System.out.println("Name : "+name);
        System.out.println("Id : "+id);
        System.out.println("University Name : "+university);
    }
    
}
