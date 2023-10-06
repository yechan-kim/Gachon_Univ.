package OOP.Kiosk.v1;

import java.util.ArrayList;
import java.util.List;

public class Order {
    private Menu menu;
    private List<Option> selOptions = new ArrayList<>();

    public Menu getMenu() {
        return menu;
    }

    public void setMenu(Menu menu) {
        this.menu = menu;
    }

    public List<Option> getSelOptions() {
        return selOptions;
    }

    public void setSelOptions(List<Option> selOptions) {
        this.selOptions = selOptions;
    }
}
