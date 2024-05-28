package ajs.java.gof.cor.v1;

public abstract class CarOpenHandler {
    protected CarOpenHandler next;

    // 생성자에서 next 를 지정해도 되고 setNext() 를 별도로 만들어도 가능 함. 객체 생성 체인 구조는 Decorator Pattern과 유사.
    // setNext() 가 코드 구조상 직관적이기는 함.
    public CarOpenHandler(){}

    // CarOpenHandler 타입을 리턴하는 구조로 만들면 메서드 체이닝도 가능.
    // 특정 필터 앞, 뒤에 필터를 끼워넣는 구조를 만들수도 있음.
    public CarOpenHandler setNext(CarOpenHandler handler) {
        next = handler;
        return handler;
    }

    // 서브 클래스에서 구현해야할 추상 메서드
    public abstract boolean open(OpenMethod method);

}
