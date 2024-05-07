package pattern;

public class App {
    public static void main(String[] args) {
        Vehicle v = VehicleFactory.createVehicle(Vtype.CAR);
        v.go();
    }
}