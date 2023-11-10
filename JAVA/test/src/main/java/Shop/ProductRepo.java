package Shop;

import java.util.HashMap;
import java.util.Map;
import java.util.Set;

public class ProductRepo {
    //데이터를 앱 구조로정의
    private static Map<Integer, Product> products = new HashMap<>();

    //맵에 샘플 데이터-컴퓨터, 스마트폰 각 3개씩 생성 => 직접 구현
    //상품번호는 일련번호가 아닌 101,231,1109 처럼 임의 숫자로 작성.
    public static void init() {
        products.put(918, new SmartPhone("Samsung Galaxy S23 Ultra", 1339000, "SKT"));
        products.put(3106, new SmartPhone("Apple iPhone 15 Pro Max", 1900000, "KT"));
        products.put(910, new SmartPhone("LG Rollable", 5300000, "LG U+"));
        products.put(960, new Computer("Samsung Galaxy Book3 Pro 16\"", 2270000, "Intel Core i7"));
        products.put(2991, new Computer("Apple MacBook Pro 16\"", 5190000, "Apple M3 Max"));
        products.put(1790, new Computer("LG gram", 2690000, "Intel Core i7"));
    }

    //전체 상품 목록을 리턴하는 매서드
    public static Set<Map.Entry<Integer, Product>> findAll() {
        return products.entrySet();
    }

    public static Product getProduct(int id) {
        return products.get(id);
    }

}
