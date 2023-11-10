package Shop;

import java.util.ArrayList;
import java.util.List;

public class Cart {
    private List<Product> productList = new ArrayList<>();

    //선택한 제품의 id로 제품을 찾아 productList에 추가
    public void add(int pid) {
        productList.add(ProductRepo.getProduct(pid));
    }

    // 전체 장바구니 데이터 리턴
    public List<Product> getProductList() {
        return productList;
    }
}
