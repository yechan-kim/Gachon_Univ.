--질의 7: 사원이 한 명도 근무하지 않는 부서를 검색하라.
SELECT *
FROM DEPARTMENT
WHERE DEPTNO NOT IN (
    SELECT DNO
    FROM EMPLOYEE
);