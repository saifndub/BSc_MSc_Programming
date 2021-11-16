package encapsulation;

public class Person {
    
    private String name;
    private int age;
    
    public void settName(String n){
        
        this.name = n;
    }
    public String getName(){
        return name;
    }
    public void settAge(int a){
        
        age = a;
    }
    public int getAge(){
        return age;
    }
    
}
