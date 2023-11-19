--질의 11: 모든 사원들을 직급별로 그룹화하고, 각 그룹별 사원 수와 평균 급여를 검색하라.
SELECT TITLE, COUNT(*), AVG(SALARY)
FROM EMPLOYEE
GROUP BY TITLE;