SELECT * FROM EMPLOYEE; -- order = created
SELECT Ssn FROM EMPLOYEE; -- order = ssn

-- 직원의 이름과 Supervisor의 이름을 검색하라 (via SelfJoin)
SELECT E.Fname AS Employee_Fname, E.Lname AS Employee_Lname,
S.Fname AS Supervisor_Fname, S.Lname AS Supervisor_Lname --SelfJoin시 구별하기 위해 Alias를 사용
FROM EMPLOYEE E, EMPLOYEE S --SelfJoin
WHERE E.Superssn = S.Ssn;

-- 멘토가 없는 직원의 이름을 검색하라
SELECT Fname, Lname
FROM EMPLOYEE
WHERE Superssn is NULL;

--주소가 'Houston, TX'인 모든 사원을 검색하라
SELECT Fname, Lname, Address
FROM EMPLOYEE
WHERE lower(Address) like '%houston, tx';

--WHERE 조건절이 없을 경우 => 카티션 Product가 일어난다
SELECT Ssn, Dname
FROM EMPLOYEE, DEPARTMENT;
SELECT COUNT(*)
FROM DEPARTMENT;

--사원이 수행하는 프로젝트들을 검색하는데, 사원이 속한 부서 이름, Lname, Fname, 수행 Project 이름을 검색하라.
SELECT Dname, Lname, Fname, Pname
FROM DEPARTMENT, EMPLOYEE, WORKS_ON, PROJECT
WHERE Dno=Dnumber AND Essn = Ssn AND Pno=Pnumber
ORDER BY Dname, Lname, Fname;

--4번 부서가 담당하는 프로젝트를 수행하는 사원들의 이름을 검색하라
SELECT Lname, Fname
FROM PROJECT, EMPLOYEE, WORKS_ON
WHERE Dnum=4 AND Pnumber=Pno AND Essn=ssn;

--STAFFORD에 위치한 모든 프로젝트에 대해서, 프로젝트 번호, 담당 부서 번호,
--부서 관리자의 성, 주소, 생년월일을 검색하라
SELECT Pnumber, Dnum, Lname, Address, Bdate
FROM PROJECT, DEPARTMENT, EMPLOYEE
WHERE UPPER(Plocation) = 'STAFFORD' AND Dnum = Dnumber AND Mgrssn = ssn;
