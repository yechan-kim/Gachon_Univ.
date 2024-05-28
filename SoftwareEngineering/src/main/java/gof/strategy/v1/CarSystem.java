package gof.strategy.v1;

public class CarSystem {
    void saftyAction(String mode) {
            // 각 조건에 따른 실행은 별도 메서드로 만들어질 수 있음.
            if(mode.equals("case1")) {
                System.out.println("## 비상 정지 동작!!");
            } else if(mode.equals("case2")) {
                System.out.println("## 비상 회피 동작!!");
            } else if(mode.equals("case3")) {
                System.out.println("## 속도 줄임!!");
            }
    }

    public static void main(String[] args) {
        CarSystem cs = new CarSystem();
        // 안전 장치 동작을 위한 모드는 센서 시스템쪽에서 해당 조건이 되면 전달한다고 가정한다.
        cs.saftyAction("case2");
    }
}
