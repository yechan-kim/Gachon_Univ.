package SOLID_EX;

public class VipDP implements DiscountPolicy {
    @Override
    public int calc(int total) {
        return (int) (total * 0.8);
    }
}
