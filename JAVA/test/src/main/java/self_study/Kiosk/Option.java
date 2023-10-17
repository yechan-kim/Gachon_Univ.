package self_study.Kiosk;

public class Option {
    private final String name;
    private final int price;

    public String getName() {
        return name;
    }

    public int getPrice() {
        return price;
    }

    public Option(String name, int price){
        this.name = name;
        this.price = price;
    }
}
