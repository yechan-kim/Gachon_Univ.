package SOLID;


import SOLID.caculate.RateCaculatePolicy;
import SOLID.member.*;
import SOLID.order.Order;
import SOLID.order.OrderService;
import SOLID.order.OrderServiceImpl;

public class Application {
    public static void main(String[] args) {
        MemberService memberService = new MemberServiceImpl();
        OrderService orderService = new OrderServiceImpl(new MemoryMemberRepository(), new RateCaculatePolicy());

        Member member1 = new Member(1L, "Kim", MemberType.VIP);
        memberService.join(member1);
        Member member2 = new Member(2L, "Lee", MemberType.FAMILY);
        memberService.join(member2);
        Member member3 = new Member(3L, "Park", MemberType.BASIC);
        memberService.join(member3);

        Order order1 = orderService.createOrder(1L, "itemA", 10000);
        Order order2 = orderService.createOrder(2L, "itemB", 20000);
        Order order3 = orderService.createOrder(3L, "itemC", 30000);

        System.out.println("order1 = " + order1);
        System.out.println("order2 = " + order2);
        System.out.println("order3 = " + order3);
    }
}

// JAVA Reflection API