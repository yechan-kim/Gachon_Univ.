-- 6번 부서가 담당하는 프로젝트No를 검색하라
SELECT Pnumber, Pname
FROM PROJECT
WHERE DNUM = 6;
-- 6번 부서가 담당하는 프로젝트를 수행하는 사원의 이름을 검색하라
SELECT Lname, Fname
FROM EMPLOYEE, PROJECT, WORKS_ON
WHERE DNUM = 6 AND PNUMBER = PNO AND ESSN = SSN;
-- 6번 부서가 담당하는 프로젝트를 모두 수행하는 사원의 이름을 검색하라
SELECT Lname, Fname
FROM EMPLOYEE E
WHERE NOT EXISTS (
    (SELECT Pnumber
    FROM PROJECT
    WHERE DNUM = 6) -- 6번 부서가 담당하는 프로젝트No, Uncorelated query
    MINUS
    (SELECT PNO
    FROM WORKS_ON
    WHERE E.SSN = ESSN) -- Each EMPLOYEE가 담당하는 프로젝트no, Corelated query
);
-- JOHN SMITH가 수행하는 프로젝트NO를 검색하라
SELECT Pno
FROM EMPLOYEE, WORKS_ON
WHERE SSN = ESSN AND UPPER(Fname)='JOHN' AND UPPER(Lname)='SMITH';
-- JOHN SMITH가 수행하는 프로젝트를 수행하는 직원의 Fname, Lname을 검색하라
-- Uncorelated inner qurey
SELECT Fname, Lname
FROM EMPLOYEE, WORKS_ON
WHERE SSN = ESSN AND Pno in (
    SELECT Pno
    FROM EMPLOYEE, WORKS_ON
    WHERE SSN = ESSN AND UPPER(Fname)='JOHN' AND UPPER(Lname)='SMITH'
); 
-- JOHN SMITH가 수행하는 프로젝트를 모두 수행하는 직원의 Fname, Lname을 검색하라
SELECT Fname, Lname
FROM EMPLOYEE E
WHERE NOT EXISTS (
    (SELECT Pno
    FROM EMPLOYEE, WORKS_ON
    WHERE SSN = ESSN AND UPPER(Fname)='JOHN' AND UPPER(Lname)='SMITH') -- JOHN SMITH가 수행하는 프로젝트
    MINUS
    (SELECT Pno
    FROM WORKS_ON
    WHERE E.SSN = ESSN) -- Each EMPLOYEE가 수행하는 Project
);