package Javaapplication4;

interface Car {
    int marketValue();
}

class TATA implements Car {
    @Override
    public int marketValue() {
        return 997000;
    }
}

class MARUTI implements Car {
    @Override
    public int marketValue() {
        return 945000;
    }
}

public class InterfaceCAR {
    public static void main(String[] args) {
        Car c = new MARUTI();
        System.out.println("M.V: " + c.marketValue());
    }

}
