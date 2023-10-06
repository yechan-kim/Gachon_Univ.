package OOP.Kiosk.v1;

import java.util.List;

public class Menu {
    private String name;
    private int price;

    private List<Option> options; // List<parameter> => type parameter: 리스트의 타입을 지정

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

    public List<Option> getOptions() {
        return options;
    }

    public void setOptions(List<Option> options) {
        this.options = options;
    }

    public Menu(String name, int price) {
        this.name = name;
        this.price = price;
    }

    @Override
    public String toString() {
        return String.format("%s/%d원", name, price);
    }
}