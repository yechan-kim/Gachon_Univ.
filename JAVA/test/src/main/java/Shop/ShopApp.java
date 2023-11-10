package Shop;

import java.util.Map;
import java.util.Scanner;

public class ShopApp {
    Scanner scan;
    Cart cart;

    public ShopApp() {
        System.out.println("#### 쇼핑몰 프로그램 v0.5 ####");
        scan = new Scanner(System.in);
        cart = new Cart();

        // 상품 데이터 초기화
        ProductRepo.init();
    }

    // 상품 목록을 출력하고 사용자 입력에 따라 동작하는 메인 메서드
    public void start() {
        while (true) {
            System.out.println("\n# 상품 목록");
            System.out.println("====================================");
            for (Map.Entry<Integer, Product> entry : ProductRepo.findAll())
                System.out.printf("[%d] %s\n", entry.getKey(), entry.getValue());
            System.out.println("-----------------------------------------------------------------");
            System.out.print("제품 번호를 입력 하세요(결제: c, 종료:q): ");
            String order = scan.next();
            if (order.equals("c"))
            {
                checkOut();
                break;
            }
            else if (order.equals("q"))
                break;
            else
                cart.add(Integer.parseInt(order));
        }
    }

    // 결제(c)를 선택했을 때 동작하는 메서드
    private void checkOut() {
        System.out.println("\n# 장바구니 목록#");
        System.out.println("====================================");
        int total = 0;
        for (Product product : cart.getProductList()) {
            System.out.println(product);
            total += product.getPrice();
        }
        System.out.printf(">>>> %d 결제를 진행할까요? (Y/N): ", total);
        String order = scan.next();
        if (order.equals("Y") || order.equals("y")) {
            System.out.println("\n>>>> 결제가 완료되었습니다!!");
        } else
            start();
    }

    public static void main(String[] args) {
        ShopApp app = new ShopApp();
        app.start();
    }
}
