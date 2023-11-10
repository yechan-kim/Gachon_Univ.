package Shop;

public class SmartPhone extends Product {

    private String carrier;

    public SmartPhone(String name, int price, String carrier) {
        super(name, price);
        this.carrier = carrier;
    }

    @Override
    public String extraInfo() {
        return String.format("carrier: %s", this.carrier);
    }
}
