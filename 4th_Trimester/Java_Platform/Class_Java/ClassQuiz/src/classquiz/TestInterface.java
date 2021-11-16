package classquiz;

interface Car {
    public void Engine();
    public void Wheels();
    public void Brakes();
}

public class TestInterface implements Car {

    @Override
    public void Engine() {
        System.out.println("we have engine");
    }

    @Override
    public void Wheels() {
        System.out.println("we have wheels");

    }

    @Override
    public void Brakes() {
        System.out.println("we have brakes");
    }
    public static void main(String[] args) {
        TestInterface mouri;
        mouri = new TestInterface();
        mouri.Engine();
        mouri.Wheels();
        mouri.Brakes();
    }
}
