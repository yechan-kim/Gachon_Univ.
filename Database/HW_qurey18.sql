--질의 18: 소속 사원 수가 4명 이하인 부서의 이름과 사원 수를 검색하라. 
SELECT DEPTNAME, COUNT(EMPNO)
FROM DEPARTMENT
LEFT JOIN EMPLOYEE ON DEPTNO = DNO
GROUP BY DEPTNO, DEPTNAME
HAVING COUNT(EMPNO) <= 4;