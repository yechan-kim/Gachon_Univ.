package Week2_Homework;

public class Methods {
    String name;

    Methods() {
        name = "김예찬";
        System.out.printf("#생성자: %s\n", name);
    }

    void printName() {
        System.out.printf("#printName(): %s\n", name);
    }

    void printName(String name) {
        System.out.printf("#printName(String name): %s\n", name);
    }

    void printNames(String... name) {
        System.out.println("#printNames(String...name)");
        for (String s : name) {
            System.out.println(s);
        }
    }

    int calc(int num1, int num2) {
        return num1 + num2;
    }

    public static void main(String[] args) {
        Methods m = new Methods();
        m.printName();
        m.printName("김길동");
        m.printNames("아무개", "김예찬", "김사랑");
        System.out.printf("#calc(int num1, int num2): %d ", m.calc(20, 50));
    }
}
