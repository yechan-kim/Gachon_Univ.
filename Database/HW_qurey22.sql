--질의 22: 최종철 또는 이수민과 같은 직급을 가진 모든 사원에 대해서 사원의 이름과 직급을 검색하라. 
SELECT EMPNAME, TITLE
FROM EMPLOYEE
WHERE TITLE IN (SELECT TITLE
    FROM EMPLOYEE
    WHERE EMPNAME = '최종철' or EMPNAME = '이수민'
);