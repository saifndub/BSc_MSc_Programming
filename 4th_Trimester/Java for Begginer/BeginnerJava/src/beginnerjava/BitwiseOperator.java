package beginnerjava;

public class BitwiseOperator {
    public static void main(String[] args) {
        int a = 40;
        int b = 12;
        
        int c,x;
        
        x = a&b;
        System.out.println("A & B = "+x);
        
        c = a|b;
        System.out.println("A | B = "+c);
        
        c = a^b;
        System.out.println("A ^ B = "+c);
        
        c = x>>3;
        System.out.println("X >> 3 = "+c);
        
        c = x<<2;
        System.out.println("X << 2 = "+c);
    }
    
}
