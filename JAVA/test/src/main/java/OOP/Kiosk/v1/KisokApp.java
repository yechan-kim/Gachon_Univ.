package OOP.Kiosk.v1;

import java.util.ArrayList; // API or Library
import java.util.List;
import java.util.Scanner;

public class KisokApp {
    protected List<Menu> menus = new ArrayList<>(); // protected => 상속받은 클래스에서만 접근 가능, ArryList => 동적 배열(구현된 클래스), List => 인터페이스 타입(규격을 제공)
    Scanner scan = new Scanner(System.in); // Scanner => InputStream으로부터 데이터를 읽어오는 클래스
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

    //    protected void checkOrder() { //주문 내역 출력 선택메뉴, 옵션, 총액 확인
//        System.out.println("주문하신 메뉴는 " + order.getMenu().getName() + "입니다.");
//        System.out.println("선택하신 옵션은 " + order.getSelOptions() + "입니다.");
//        int optionPrice = 0;
//        for (Option op : order.getSelOptions())
//            optionPrice += op.getPrice();
//        System.out.println("총액은 " + (order.getMenu().getPrice() * order.getSelOptions().size() + optionPrice) + "원 입니다.");
//    }
    private void checkOrder() {
        System.out.println("## " + order.getMenu() + " 주문 내역 확인 ##");
        System.out.println("====================");
        order.getSelOptions().forEach(System.out::println);

        int total = order.getMenu().getPrice();
        for (Option op : order.getSelOptions())
            total += op.getPrice();

        System.out.println("## 결제 금액: " + total + "원 ##");
    }

    public static void main(String[] args) {
        KisokApp app = new KisokApp();
    }
}
