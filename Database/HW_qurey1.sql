--질의 1: 가장 오래 근무한 사원에 관한 모든 데이터를 검색하라.
SELECT *
FROM EMPLOYEE
WHERE HIREDATE = (
    SELECT MIN(HIREDATE)
    FROM EMPLOYEE
);