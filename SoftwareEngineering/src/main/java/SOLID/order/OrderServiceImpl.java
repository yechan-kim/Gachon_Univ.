package SOLID.order;

import SOLID.caculate.CaculatePolicy;
import SOLID.member.Member;
import SOLID.member.MemberRepository;

public class OrderServiceImpl implements OrderService {

    private final MemberRepository memberRepository;
    private final CaculatePolicy caculatePolicy;

    public OrderServiceImpl(MemberRepository memberRepository, CaculatePolicy caculatePolicy) {
        this.memberRepository = memberRepository;
        this.caculatePolicy = caculatePolicy;
    }

    @Override
    public Order createOrder(Long memberId, String itemName, int itemPrice) {
        Member member = memberRepository.findById(memberId);
        int caculatePrice = caculatePolicy.caculate(member, itemPrice);
        return new Order(memberId, itemName, itemPrice, caculatePrice);
    }
}
