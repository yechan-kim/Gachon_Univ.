--HW: RA 4.5까지
--JOHN SMITH가 속한 부서번호이거나, ADMINISTRATION부서의 부서번호를 검색하라.
(SELECT DNO
FROM EMPLOYEE
WHERE UPPER(Fname)='JOHN' AND UPPER(Lname)='SMITH')
UNION
(SELECT Dnumber
FROM DEPARTMENT
WHERE UPPER(Dname)='ADMINISTRATION');

--모든 사원들에 대해서 사원들이 속한 부서번호와 그 사원이 속한 부서의 평균 급여, 최대 급여를 검색하라.
--단, 그 부서의 번호는 2보다 커야한다.
SELECT DNO, ROUND(AVG(SALARY)), MAX(SALARY)
FROM EMPLOYEE
GROUP BY DNO
HAVING DNO > 2;

--모든 사원들에 대해서 사원들이 속한 부서번호와 그 사원이 속한 부서의 평균 급여, 최대 급여를 검색하라.
--단, 그 부서의 평균 급여는 5만원 이상 이어야한다.
SELECT DNO, AVG(SALARY), MAX(SALARY)
FROM EMPLOYEE
GROUP BY DNO
HAVING AVG(SALARY) >= 50000;

--For each project on which more than two employees work, retrieve the project number,
--the project name, and the number of employees who work on the project. 
SELECT Pnumber, Pname, COUNT(*)
FROM PROJECT, WORKS_ON
WHERE Pnumber = Pno
GROUP BY Pnumber, Pname -- Err: GROUP BY 표현식이 아닙니다. -> GROUP BY에 Pname 누락이 원인
HAVING COUNT(*) > 2;

-- For each department, retrieve the department number,
--the number of employees in the department, and their average salary. 
SELECT DNO, COUNT(*), AVG(SALARY)
FROM EMPLOYEE
GROUP BY DNO; --소수점 올림 or 버림 함수 -> ROUND()

SELECT SSN, AVG(SALARY) FROM EMPLOYEE;

SELECT COUNT(*) FROM EMPLOYEE;
SELECT COUNT(SSN) FROM EMPLOYEE;
SELECT COUNT(SUPERSSN) FROM EMPLOYEE;
SELECT AVG(SALARY) AS AVERAGE_SAL, MAX(SALARY) AS MAX_SAL
FROM EMPLOYEE;