--HW: RA 4.5����
--JOHN SMITH�� ���� �μ���ȣ�̰ų�, ADMINISTRATION�μ��� �μ���ȣ�� �˻��϶�.
(SELECT DNO
FROM EMPLOYEE
WHERE UPPER(Fname)='JOHN' AND UPPER(Lname)='SMITH')
UNION
(SELECT Dnumber
FROM DEPARTMENT
WHERE UPPER(Dname)='ADMINISTRATION');

--��� ����鿡 ���ؼ� ������� ���� �μ���ȣ�� �� ����� ���� �μ��� ��� �޿�, �ִ� �޿��� �˻��϶�.
--��, �� �μ��� ��ȣ�� 2���� Ŀ���Ѵ�.
SELECT DNO, ROUND(AVG(SALARY)), MAX(SALARY)
FROM EMPLOYEE
GROUP BY DNO
HAVING DNO > 2;

--��� ����鿡 ���ؼ� ������� ���� �μ���ȣ�� �� ����� ���� �μ��� ��� �޿�, �ִ� �޿��� �˻��϶�.
--��, �� �μ��� ��� �޿��� 5���� �̻� �̾���Ѵ�.
SELECT DNO, AVG(SALARY), MAX(SALARY)
FROM EMPLOYEE
GROUP BY DNO
HAVING AVG(SALARY) >= 50000;

--For each project on which more than two employees work, retrieve the project number,
--the project name, and the number of employees who work on the project. 
SELECT Pnumber, Pname, COUNT(*)
FROM PROJECT, WORKS_ON
WHERE Pnumber = Pno
GROUP BY Pnumber, Pname -- Err: GROUP BY ǥ������ �ƴմϴ�. -> GROUP BY�� Pname ������ ����
HAVING COUNT(*) > 2;

-- For each department, retrieve the department number,
--the number of employees in the department, and their average salary. 
SELECT DNO, COUNT(*), AVG(SALARY)
FROM EMPLOYEE
GROUP BY DNO; --�Ҽ��� �ø� or ���� �Լ� -> ROUND()

SELECT SSN, AVG(SALARY) FROM EMPLOYEE;

SELECT COUNT(*) FROM EMPLOYEE;
SELECT COUNT(SSN) FROM EMPLOYEE;
SELECT COUNT(SUPERSSN) FROM EMPLOYEE;
SELECT AVG(SALARY) AS AVERAGE_SAL, MAX(SALARY) AS MAX_SAL
FROM EMPLOYEE;