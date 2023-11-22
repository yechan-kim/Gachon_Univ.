-- 박영권과 같은 직급을 갖는 모든 사원들의 이름과 직급을 검색하라.
-- 단 중첩질의를 사용할 것
SELECT EMPNAME, TITLE
FROM EMPLOYEE
WHERE TITLE = (
    SELECT TITLE
    FROM EMPLOYEE
    WHERE EMPNAME = '박영권' -- scalar 값 return ('과장')
);

-- 박영권과 같은 직급을 갖는 모든 사원들의 이름과 직급을 검색하라.
-- 단 충첩질의를 사용하지 말아라. => self join을 사용할 것
SELECT E.EMPNAME, E.TITLE
FROM EMPLOYEE E, EMPLOYEE Park
WHERE E.TITLE = Park.TITLE AND Park.EMPNAME = '박영권';