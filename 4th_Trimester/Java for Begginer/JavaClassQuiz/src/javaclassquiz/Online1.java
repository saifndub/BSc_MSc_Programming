package JavaClassQuiz;

import java.util.Scanner;

class Teacher{
    String name;
    int phone;
    String address;
    Teacher(){
        Scanner sc = new Scanner(System.in);
        System.out.print("Teacher's name= ");
        name=sc.nextLine();
        System.out.println();
        System.out.print("Phone= ");
        phone=sc.nextInt();
        System.out.println();
       // System.out.print("Address= ");
        //address=sc.nextLine();
        //System.out.println();
    }
    public void print(){
        System.out.println("Teacher's name= "+name+"\nphone= "+phone);
    }
}

class Student{
    String name;
    String parent_name;
    int semester;
    double GPA;
    Student(){
        Scanner s=new Scanner(System.in);
        System.out.print("Student's name= ");
        name=s.nextLine();
        System.out.println();
        System.out.print("Student's Parent's name= ");
        parent_name=s.nextLine();
        System.out.println();
        System.out.print("Semester= ");
        semester=s.nextInt();
        System.out.println();
        System.out.print("GPA= ");
        GPA=s.nextDouble();
        System.out.println();
        
    }
    public void print(){
        System.out.println("Student's name= "+name+"\nParent's name= "+parent_name+"\nSemester= "+semester+"\nGPA= "+GPA);
    }
    
}

class Subject{
    Teacher t;
    Student s;
    String subject_name;
    Subject(){
        t=new Teacher();
        s=new Student();
        System.out.print("Subject name= ");
        Scanner s=new Scanner(System.in);
        subject_name=s.nextLine();
        System.out.println();
    }
    public void print(){

        System.out.println("Subject's name= "+subject_name);
                t.print();
        s.print();
    }
    
}
public class Online1 {
    public static void main(String[] args) {
        // TODO code application logic here 
        Subject ss=new Subject();
        System.out.println("printing output");
        ss.print();
        
    }
    
}