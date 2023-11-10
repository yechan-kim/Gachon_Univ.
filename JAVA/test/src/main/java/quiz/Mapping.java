package quiz;

import java.util.*;

public class Mapping {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        Map<String, Integer> s1 = new HashMap<>();
        s1.put("국어", 95);
        s1.put("영어", 87);
        s1.put("수학", 88);
        s1.put("사회", 92);
        s1.put("과학", 96);

        Map<String, Integer> s2 = new HashMap<>();
        s2.put("국어", 88);
        s2.put("영어", 67);
        s2.put("수학", 96);
        s2.put("사회", 91);
        s2.put("과학", 92);

        Map<String, Integer> s3 = new HashMap<>();
        s3.put("국어", 94);
        s3.put("영어", 67);
        s3.put("수학", 86);
        s3.put("사회", 99);
        s3.put("과학", 91);

        HashMap<String, HashMap> students = new HashMap<>();
        students.put("홍길동", (HashMap) s1);
        students.put("김철수", (HashMap) s2);
        students.put("이명희", (HashMap) s3);


        System.out.print("검색할 이름을 입력하세요: ");
        String name = scan.next();

        System.out.printf("이름: %s\n", name);

        Map<String, Integer> studentScores = students.get(name);
        int total = 0;

        for (Map.Entry<String, Integer> entry : studentScores.entrySet()) {
            System.out.printf("%s: %s\n", entry.getKey(), entry.getValue());
            total += entry.getValue();
        }

        int numSubjects = studentScores.size();
        System.out.printf("총점: %d점, 평균: %d점", total, total / numSubjects);
    }
}