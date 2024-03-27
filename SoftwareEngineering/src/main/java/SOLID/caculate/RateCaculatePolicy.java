package SOLID.caculate;

import SOLID.member.Member;
import SOLID.member.MemberType;

public class RateCaculatePolicy implements CaculatePolicy {

    @Override
    public int caculate(Member member, int price) {
        if (member.getMemberType() == MemberType.VIP) {
            return price * 80 / 100;
        } else if(member.getMemberType() == MemberType.FAMILY) {
            return price * 90 / 100;
        }
        else {
            return price;
        }
    }
}
