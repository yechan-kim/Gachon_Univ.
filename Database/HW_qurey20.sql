--���� 20. �� �μ����� ���� ���� �޿��� �޴� ������� �̸�, �μ���ȣ, �޿��� �˻��϶�.
SELECT EMPNAME, DNO, SALARY
FROM EMPLOYEE
WHERE (DNO, SALARY) IN ( SELECT DNO, MAX(SALARY) AS MAX_SALARY
FROM EMPLOYEE
GROUP BY DNO);


