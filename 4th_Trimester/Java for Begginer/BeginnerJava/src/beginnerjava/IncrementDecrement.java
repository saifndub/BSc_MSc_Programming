package beginnerjava;

public class IncrementDecrement {
    public static void main(String[] args) {
        int y;
        
        int x = 25;
        y = --x;    //x = 24 
        System.out.println("Y = "+y);
        
        x = 25;
        y = x--;    //x = 25
        System.out.println("Y = "+y);
        
        x = 25;
        y = ++x;    //x = 26
        System.out.println("Y = "+y);
        
        x = 25;
        y = x++;    //x = 25
        System.out.println("Y = "+y);
    }
    
}
