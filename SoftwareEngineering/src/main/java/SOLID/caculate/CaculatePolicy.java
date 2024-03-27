package SOLID.caculate;


import SOLID.member.Member;

public interface CaculatePolicy {
    /**
     * @return 할인 대상 금액
     */
    int caculate(Member member, int price);
}