
package ClassQuiz;

import java.util.Scanner;

class displayinfo{
    
    char ch;
    int num;
    
    displayinfo(char ch1,int n1){
        ch = ch1;
        num = n1;
    }
    void print(){
  
        System.out.println(ch +"\t"+num);
    } 
}

public class Test {

   
    public static void main(String[] args) {
        
        Scanner saif = new Scanner(System.in);
        
        String s1 = new String();
        String s2 = new String();
        char[] arr=new char[100];
        
        System.out.print("Enter 1st String : ");
        s1 = saif.nextLine();
        System.out.print("Enter 2nd String : ");
        s2 = saif.nextLine();
        
        for(int i = 0;i < s1.length();i++){
                for(int j =0;j < s2.length();j++){
                    if(s1.charAt(i) == s2.charAt(j)){
                        
                        displayinfo d= new displayinfo(s2.charAt(j),j);
                        d.print();
                    }
                }
            }
        
        
    }
    
}
