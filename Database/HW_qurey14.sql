--질의 14: 모든 부서에 대해서 이름, 층, 각 부서에 근무하는 사원 수를 검색하라. 사원이 없는 부서도 포함시켜라.
SELECT DEPTNAME, FLOOR, COUNT(EMPNO)
FROM DEPARTMENT, EMPLOYEE
WHERE DNO = DEPTNO
GROUP BY DEPTNAME, FLOOR; 