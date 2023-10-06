package OOP.Kiosk.v1;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class KisokApp {
    boolean VALID = false;
    protected List<Menu> menus = new ArrayList<>();
    Scanner scan = new Scanner(System.in);
    Order order = new Order();

    public KisokApp() {
        loadData();
        showMenu();

        System.out.print("# 매뉴를 선택하세요: ");

        int sel = scan.nextInt();
        Menu menu = menus.get(sel);
        order.setMenu(menu);
        optionSelect(menu);

        checkOrder();
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

    protected void showMenu() {
        System.out.println("#### 메뉴 ####");
        int i = 0;
        for (Menu menu : menus) {
            System.out.println("[" + i++ + "] " + menu.getName() + "/" + menu.getPrice() + "원");
        }
    }

    protected void optionSelect(Menu menu) {
        System.out.println(menu.getName() + " 선택: 옵션을 선택하세여(콤마구분)!!");
        int i = 0;
        for (Option op : menu.getOptions())
            System.out.println("[" + i++ + "] " + op.getName() + "/" + op.getPrice() + "원");
        System.out.print("# 옵션 => ");
        String optionSelect = scan.next();

        for (String op : optionSelect.split(","))
            order.getSelOptions().add(menu.getOptions().get(Integer.valueOf(op)));
    }

    protected void checkOrder() { //주문 내역 출력 선택메뉴, 옵션, 총액 확인
        System.out.println("주문하신 메뉴는 " + order.getMenu().getName() + "입니다.");
        System.out.println("선택하신 옵션은 " + order.getSelOptions() + "입니다.");
        int optionPrice = 0;
        for (Option op : order.getSelOptions())
            optionPrice += op.getPrice();
        System.out.println("총액은 " + (order.getMenu().getPrice() * order.getSelOptions().size() + optionPrice) + "원 입니다.");
    }

    public static void main(String[] args) {
        KisokApp app = new KisokApp();
    }
}
