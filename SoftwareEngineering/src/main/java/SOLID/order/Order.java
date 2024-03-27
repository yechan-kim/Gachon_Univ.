package SOLID.order;

public class Order {
    private Long memberId;
    private String itemName;
    private int itemPrice;
    private int caculatePrice;

    public Order(Long memberId, String itemName, int itemPrice, int caculatePrice) {
        this.memberId = memberId;
        this.itemName = itemName;
        this.itemPrice = itemPrice;
        this.caculatePrice = caculatePrice;
    }

    public int calculatePrice() {
        return itemPrice - caculatePrice;
    }

    public Long getMemberId() {
        return memberId;
    }

    public String getItemName() {
        return itemName;
    }

    public int getItemPrice() {
        return itemPrice;
    }

    public int getDiscountPrice() {
        return caculatePrice;
    }

    @Override
    public String toString() {
        return "Order{" +
                "memberId=" + memberId +
                ", itemName='" + itemName + '\'' +
                ", itemPrice=" + itemPrice +
                ", caculatePrice=" + caculatePrice +
                '}';
    }
}