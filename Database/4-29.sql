-- 2005년에 컴퓨터학과에 입학한 모든 학생들에 대해서 학번과 이름을 검색하라. 학생의 이름의 오름차순으로 결과가 나타나야 한다. 
SELECT SID, SNAME
FROM STUDENT
WHERE STARTYEAR = 2005 AND DID = (
    SELECT DID
    FROM DEPARTMENT
    WHERE DNAME= '컴퓨터학과'
)
ORDER BY SNAME ASC;

-- 과목 'COMP-321'과 'COMP-234'에 대해서 시험을 실시한 교수들의 이름을 검색하라.
SELECT DISTINCT(PROFESSOR)
FROM EXAM
WHERE CID = 'COMP-321' OR CID = 'COMP-234';

-- 오직 한 과목에 대해서만 시험을 치른 학생(즉, 릴레이션 EXAM에 한 개의 투플만 들어있는 학생)들의 학번을 검색하라. 
SELECT SID
FROM EXAM
GROUP BY SID
HAVING COUNT(CID) = 1;

-- 적어도 두 과목의 시험을 실시한 교수들의 이름을 검색하라. 결과에서 중복이 제거되도록하라.
SELECT DISTINCT PNAME
FROM PROFESSOR, EXAM
WHERE PNAME = PROFESSOR
GROUP BY PNAME
HAVING COUNT(DISTINCT CID) >= 2;

-- 적어도 한 시험의 성적이 ‘A0’인 학생들의 학번을 검색하라. 결과에서 중복이 제거되도록하라.
SELECT DISTINCT SID
FROM EXAM 
WHERE GRADE = 'A0';

-- 적어도 두 시험의 성적이 ‘A0’인 학생들의 학번을 검색하라.
SELECT SID
FROM EXAM E
WHERE GRADE = 'A0'
GROUP BY SID
HAVING COUNT(DISTINCT CID) >= 2;

-- 모든 시험의 성적이 ‘A0’인 학생들의 학번을 검색하라.
SELECT DISTINCT E.SID
FROM EXAM E
WHERE NOT EXISTS (
    SELECT SID
    FROM EXAM C
    WHERE E.SID = C.SID AND C.GRADE <> 'A0'
);

-- 각 과목의 평균 성적을 검색하라.
SELECT CID, AVG(GRADE) -- AVG는 문자이기 때문에 평균을 낼 수 없음
FROM EXAM
GROUP BY CID;
