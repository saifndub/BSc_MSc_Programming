package pkginterface;

interface Cars {
    public void Engine();
    public void Wheels();
    public void Brakes();
}

public class Car implements Cars {

    @Override
    public void Engine() {
        System.out.println("we have engine.");
    }

    @Override
    public void Wheels() {
        System.out.println("we have wheels.");
    }

    @Override
    public void Brakes() {
        System.out.println("we have brakes.");
    }

    public static void main(String[] args) {
        Cars saif;
        saif = new Car();
        saif.Engine();
        saif.Wheels();
        saif.Brakes();
    }

}
