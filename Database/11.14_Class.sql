SELECT * FROM EMPLOYEE; -- order = created
SELECT Ssn FROM EMPLOYEE; -- order = ssn

-- ������ �̸��� Supervisor�� �̸��� �˻��϶� (via SelfJoin)
SELECT E.Fname AS Employee_Fname, E.Lname AS Employee_Lname,
S.Fname AS Supervisor_Fname, S.Lname AS Supervisor_Lname --SelfJoin�� �����ϱ� ���� Alias�� ���
FROM EMPLOYEE E, EMPLOYEE S --SelfJoin
WHERE E.Superssn = S.Ssn;

-- ���䰡 ���� ������ �̸��� �˻��϶�
SELECT Fname, Lname
FROM EMPLOYEE
WHERE Superssn is NULL;

--�ּҰ� 'Houston, TX'�� ��� ����� �˻��϶�
SELECT Fname, Lname, Address
FROM EMPLOYEE
WHERE lower(Address) like '%houston, tx';

--WHERE �������� ���� ��� => īƼ�� Product�� �Ͼ��
SELECT Ssn, Dname
FROM EMPLOYEE, DEPARTMENT;
SELECT COUNT(*)
FROM DEPARTMENT;

--����� �����ϴ� ������Ʈ���� �˻��ϴµ�, ����� ���� �μ� �̸�, Lname, Fname, ���� Project �̸��� �˻��϶�.
SELECT Dname, Lname, Fname, Pname
FROM DEPARTMENT, EMPLOYEE, WORKS_ON, PROJECT
WHERE Dno=Dnumber AND Essn = Ssn AND Pno=Pnumber
ORDER BY Dname, Lname, Fname;

--4�� �μ��� ����ϴ� ������Ʈ�� �����ϴ� ������� �̸��� �˻��϶�
SELECT Lname, Fname
FROM PROJECT, EMPLOYEE, WORKS_ON
WHERE Dnum=4 AND Pnumber=Pno AND Essn=ssn;

--STAFFORD�� ��ġ�� ��� ������Ʈ�� ���ؼ�, ������Ʈ ��ȣ, ��� �μ� ��ȣ,
--�μ� �������� ��, �ּ�, ��������� �˻��϶�
SELECT Pnumber, Dnum, Lname, Address, Bdate
FROM PROJECT, DEPARTMENT, EMPLOYEE
WHERE UPPER(Plocation) = 'STAFFORD' AND Dnum = Dnumber AND Mgrssn = ssn;
