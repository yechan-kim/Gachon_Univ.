--질의 12: 모든 사원들을 직급별로 그룹화하고, 동일 직급을 갖는 사원 수가 2명 이상인 직급에 대해서 직급, 사원 수, 연간 급여를 검색하라.
SELECT TITLE, COUNT(*), AVG(SALARY) * 12
FROM EMPLOYEE
GROUP BY TITLE
HAVING COUNT(*) >= 2;