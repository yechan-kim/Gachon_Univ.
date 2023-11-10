package collection;

import java.util.*;

public class MapTest {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        List<Integer> s1 = Arrays.asList(95, 87, 88, 92, 96);
        List<Integer> s2 = Arrays.asList(88, 67, 96, 91, 92);
        List<Integer> s3 = Arrays.asList(94, 67, 86, 99, 91);

        Map<String, List<Integer>> students = new HashMap<>();
        students.put("홍길동", s1);
        students.put("김철수", s2);
        students.put("이명희", s3);

        System.out.print("검색할 이름을 입력하세요: ");
        String name = scan.next();

        int total = 0;
        for (int score : students.get(name)) // students.get(name) => type: List<Integer>
            total += score;

        System.out.printf("%s님의 총점은 %d점, 평균은 %d점 입니다!!", name, total, total / students.get(name).size());
    }
}
