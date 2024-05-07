package pattern;

public class VehicleFactory {
    public static Vehicle createVehicle(Vtype type) {
//        switch (type) {
//            case CAR:
//                return new Car();
//            case TRUCK:
//                return new Truck();
//            default:
//                return null;
//        }
        return switch (type) {
            case CAR -> new Car();
            case TRUCK -> new Truck();
        };
    }
}