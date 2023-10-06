package quiz;

import java.util.Arrays;

public class Arr {
    public static void main(String[] args) {
        int[] Hong = {90, 80, 70};
        int[] Kim = {100, 90, 95};
        int[] Ah = {95, 91, 88};

        System.out.printf("%3s %5s %4s %4s %3s %5s\n", "이름", "자바", "웹프", "모바일", "총점", "평균");
        // optionalDouble.getAsDouble() => optionalDouble객체를 double로 변환
        System.out.printf("%3s %5d %5d %5d %5d %.2f\n", "홍길동", Hong[0], Hong[1], Hong[2], Arrays.stream(Hong).sum(), Arrays.stream(Hong).average().getAsDouble());
        System.out.printf("%3s %5d %5d %5d %5d %.2f\n", "김길동", Kim[0], Kim[1], Kim[2], Arrays.stream(Kim).sum(), Arrays.stream(Kim).average().getAsDouble());
        System.out.printf("%3s %5d %5d %5d %5d %.2f\n", "아무개", Ah[0], Ah[1], Ah[2], Arrays.stream(Ah).sum(), Arrays.stream(Ah).average().getAsDouble());
    }
}