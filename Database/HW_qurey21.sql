--���� 21: ��� ����� ���ؼ� �����ȣ, �̸�, �޿�, �μ���ȣ, �Ҽ� �μ��� ��� �޿��� �˻��϶�. 
SELECT E.EMPNO, E.EMPNAME, E.SALARY, E.DNO, ( SELECT AVG(SALARY)
FROM EMPLOYEE
WHERE DNO = E.DNO) AS DEPARTMENT_AVG_SALARY
FROM EMPLOYEE E;