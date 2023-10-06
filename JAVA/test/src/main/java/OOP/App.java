package OOP;

public class App {
    public static void main(String[] args) {
        Person p1 = new Person("홍길동", new CellPhone("010-1234-5678"));
//        p1.setName("홍길동");
//
//        CellPhone cp1 = new CellPhone();
//        cp1.setNumber("010-1234-5678");
//
//        p1.setPhone(cp1);

        Person p2 = new Person("김사랑", new CellPhone("010-9876-5432"));
//        p2.setName("김사랑");
//
//        CellPhone cp2 = new CellPhone();
//        cp2.setNumber("010-9876-5432");
//
//        p2.setPhone(cp2);

        p1.getPhone().callTo(p2); //전화걸기 김사랑
        p2.getPhone().receiveFrom(p1);//전화수신 홍길동
    }
}
