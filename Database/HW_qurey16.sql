--질의 16: 개발부서에 근무하는 사원들의 직급과 직급별 사원 수를 검색하라. 사원 수가 많은 직급부터 표시하라. 
SELECT TITLE, COUNT(*) AS EMPLOYEE_COUNT
FROM EMPLOYEE,DEPARTMENT
WHERE DEPTNAME = '개발' AND DNO = DEPTNO
GROUP BY TITLE
ORDER BY EMPLOYEE_COUNT DESC;