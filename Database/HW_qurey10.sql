--질의 10: EMPLOYEE와 DEPARTMENT 릴레이션을 조인하고, 부서번호 순서에 따라정렬하라. 
SELECT EMPLOYEE.*, DEPARTMENT.DEPTNAME, DEPARTMENT.FLOOR
FROM EMPLOYEE
JOIN DEPARTMENT ON DNO = DEPTNO
ORDER BY DNO