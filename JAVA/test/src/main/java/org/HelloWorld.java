package org;

public class HelloWorld {
    String name;
    String snum;

    public HelloWorld(String name, String snum) { // 생성자
        this.name = name;
        this.snum = snum;
    }

    public void print() { // 메소드
        System.out.printf("%s, %s\n",snum,name);
    }

    public static void main(String[] args) {
        HelloWorld hello = new HelloWorld("김예찬", "202035130");
        hello.print();
        hello.name = "홍길동";
        hello.snum = "202035000";
        hello.print();
        System.out.printf("%s, %s\n",hello.snum,hello.name);
    }
}