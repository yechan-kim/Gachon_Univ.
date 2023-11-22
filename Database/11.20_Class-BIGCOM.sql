-- 스스로해보는 질의 과제는 SMALLCOM user를 만들어 실행할 것
-- SMALLCOM의 EMPTY DB가 만들어진다.
-- SMALLCOMLoginProfile을 만들어 접속한다.
-- 접속 후 worksheet에서 P.511~513을 참조하여, EMPLOYEE DEPARTMENT TABLE를 만들고 DATA를 INSERT한다.
-- P.523을 보고 만들어서 일요일까지 사이버 캠퍼스에 제출

SELECT COUNT(*) -- scalar(단일) 값
FROM EMPLOYEE;

-- 세 명 이상의 사원이 근무하는 각 프로젝트에 대해서 프로젝트 번호, 이름, 그 프로젝트에서 근무하는 사원의 수를 검색하라
SELECT Pnumber, Pname, COUNT(*)
FROM PROJECT, WORKS_ON
WHERE Pnumber = Pno
GROUP BY Pnumber, Pname
HAVING COUNT(Essn) >= 3; -- 집단함수, grouping attribute을 이용한 조건문만 사용 가능 => HAVING: group에 대한 조건문이기 때문

-- 각 프로젝트에 대해서 프로젝트 번호, 이름, 그 프로젝트에서 근무하는 사원의 수를 검색하라
SELECT Pnumber, Pname, COUNT(*)
FROM PROJECT, WORKS_ON
WHERE Pnumber = Pno
GROUP BY Pnumber, Pname;

-- 각 부서에 대해서 부서번호, 부서이름, 각 부서에 속한 사원들의 수와 평균급여를 검색하라
SELECT DNO, Dname, COUNT(*), ROUND(AVG(SALARY)) -- grouping attribute는 필수로 들어가야함
FROM EMPLOYEE, DEPARTMENT
WHERE DNO = Dnumber
GROUP BY DNO, Dname; -- grouping attribute

-- 각 부서에 대해서 부서번호, 각 부서에 속한 사원들의 수와 평균급여를 검색하라
SELECT DNO, COUNT(*), ROUND(AVG(SALARY))
FROM EMPLOYEE
GROUP BY DNO;

-- 모든 사원의 급여의 합, 최고급여, 최저급여, 평균급여를 구하라
SELECT SUM(SALARY), MAX(SALARY), MIN(SALARY), ROUND(AVG(SALARY))
FROM EMPLOYEE;

-- Research부서에서 근무하는 사원의 급여의 합, 최고급여, 최저급여, 평균급여를 구하라
SELECT SUM(SALARY), MAX(SALARY), MIN(SALARY), ROUND(AVG(SALARY))
FROM EMPLOYEE, DEPARTMENT
WHERE DNO = Dnumber AND UPPER(Dname) = 'RESEARCH'; -- 없으면 카티션 프로덕트 실행

-- Research부서에서 근무하는 총 사원의 수를 구하라
SELECT COUNT(*)
FROM EMPLOYEE, DEPARTMENT
WHERE DNO = Dnumber AND UPPER(Dname) = 'RESEARCH';