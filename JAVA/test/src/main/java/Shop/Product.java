package Shop;

public abstract class Product {
    private String name;
    private int price;

    // 세부 제품별 상세 정보 리턴
    public abstract String extraInfo();

    public Product(String name, int price) {
        this.name = name;
        this.price = price;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public int getPrice() {
        return price;
    }

    public void setPrice(int price) {
        this.price = price;
    }

    @Override
    public String toString() {
        return String.format("%s, %s : %d", name, extraInfo(), price);
    }
}