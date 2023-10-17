package self_study.Kiosk;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Kiosk {
    public List<Menu> menus = new ArrayList<>();
    public Scanner scan = new Scanner(System.in);
    Order order = new Order();

    public Kiosk() {
        loadData();
        showMenu();

        System.out.print("# 매뉴를 선택하세요: ");

        int sel = scan.nextInt();
        Menu menu = menus.get(sel);
        order.setMenu(menu);
        optionSelect(menu);

        checkOrder();
        checkOut();
    }

    protected void loadData() {
        Menu m = new Menu("돈까쓰", 10000);
        List<Option> op = new ArrayList<>();
        op.add(new Option("일반", 0));
        op.add(new Option("왕돈까스", 1000));
        op.add(new Option("치즈가루", 500));
        m.setOptions(op);
        menus.add(m);

        m = new Menu("카레라이스", 9000);
        op = new ArrayList<>();
        op.add(new Option("보통", 0));
        op.add(new Option("맵게", 200));
        op.add(new Option("치킨", 1000));
        op.add(new Option("새우", 2000));
        op.add(new Option("난 추가", 2000));
        m.setOptions(op);
        menus.add(m);
    }

    public void showMenu() {
        System.out.println("#### 메뉴 ####");
        int i = 0;
        for (Menu menu : menus)
            System.out.printf("[%d] %s: %d원\n", i++, menu.getName(), menu.getPrice());
    }

    public void optionSelect(Menu menu) {
        System.out.println(menu.getName() + " 선택: 옵션을 선택하세여(콤마구분)!!");
        int i = 0;
        for (Option op : menu.getOptions())
            System.out.printf("[%d] %s: %d원\n", i++, op.getName(), op.getPrice());
        System.out.print("# 옵션 => ");
        String optionSelect = scan.next();

        for (String op : optionSelect.split(","))
            order.getSelOptions().add(menu.getOptions().get(Integer.valueOf(op)));
    }

    private void checkOrder() {
        System.out.printf("## %s 주문 내역 확인 ##\n", order.getMenu().getName());
        System.out.println("====================");
        for (Option op : order.getSelOptions())
            System.out.printf("%s: %d원\n", op.getName(), op.getPrice());

        int total = order.getMenu().getPrice();
        for (Option op : order.getSelOptions())
            total += op.getPrice();

        System.out.printf("## 결제 금액: %d원 ##\n", total);
    }

    public void checkOut() {
        System.out.println(">>>> 결제를 진행 합니다!!! <<<<");
    }

    public static void main(String[] args) {
        Kiosk app = new Kiosk();
    }
}