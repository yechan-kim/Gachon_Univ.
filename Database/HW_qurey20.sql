--질의 20. 각 부서에서 가장 많은 급여를 받는 사원들의 이름, 부서번호, 급여를 검색하라.
SELECT EMPNAME, DNO, SALARY
FROM EMPLOYEE
WHERE (DNO, SALARY) IN ( SELECT DNO, MAX(SALARY) AS MAX_SALARY
FROM EMPLOYEE
GROUP BY DNO);