package self_study.Kiosk;

import java.util.ArrayList;
import java.util.List;

public class Order {
    public Menu menu;
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
