package OOP.Kiosk.v1;

public class Option {
    private final String name; // 한번 로드된 인스턴스는 변동 불가
    private final int price;

    public String getName() {
        return name;
    }

    public int getPrice() {
        return price;
    }

    public Option(String name, int price) {
        this.name = name;
        this.price = price;
    }

    @Override
    public String toString() {
        return String.format("%s/%d원", name, price);
    }
}
