package SOLID_EX;

public class CheckOut {
    int totalPrice = 50000;
    private String memberType;

    public CheckOut(String memberType) {
        this.memberType = memberType;
    }

    public void calculate() {
        System.out.printf("합계: %d\n", totalPrice);
        float discountRate = 0;
        if (memberType.equals("VIP")) {
            totalPrice *= 0.8;
        } else if (memberType.equals("FAMILY")) {
            totalPrice *= 0.9;
        } else if (memberType.equals("SILVER")) {
            totalPrice *= 0.95;
        }

        /* JDK 17 switch 버전
        totalPrice -= switch(memberType) {
            case "VIP" -> (int)Math.round(totalPrice * 0.2);
            default -> 0;
        };
         */
        System.out.printf("할인 적용 후: %d", totalPrice);
    }

    public static void main(String[] args) {
        CheckOut checkout = new CheckOut("FAMILY");
        checkout.calculate();
    }
}
