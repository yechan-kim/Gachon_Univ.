package self_study.include;

public class B {
    public static void B1() {
        System.out.println("In B1()");
    }

    public static void B2() {
        System.out.println("In B2()");
        A.A2();
        B1();
    }
}
