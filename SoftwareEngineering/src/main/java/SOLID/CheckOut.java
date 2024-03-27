package SOLID;

public class CheckOut {
    public enum MemberType {
        FAMILY,
        VIP
    }

    private MemberType memberType;

    public CheckOut(MemberType memberType) {
        this.memberType = memberType;
    }

    public void setMemberType(MemberType memberType) {
        this.memberType = memberType;
    }

    public MemberType getMemberType() {
        return memberType;
    }

    public static int calculate(CheckOut checkOut, int price) {
        if (checkOut.getMemberType() == MemberType.VIP) {
            return price - (price * 10 / 100);
        } else if(checkOut.getMemberType() == MemberType.FAMILY) {
            return price - (price * 20 / 100);
        }
        else {
            return price;
        }
    }

    public static void main(String[] args) {
        CheckOut member1 = new CheckOut(MemberType.VIP);
        CheckOut member2 = new CheckOut(MemberType.FAMILY);

        int price = 10000;
        System.out.println("price: " + price);

        System.out.println("VIP price: " + calculate(member1, price));
        System.out.println("FAMILY price: " + calculate(member2, price));
    }
}
