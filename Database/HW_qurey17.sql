--���� 17: ��� �޿��� ���� ���� �μ��� �μ���ȣ�� �� �μ��� ���� �޿��� �˻��϶�. 
SELECT DNO, MIN(SALARY) AS MIN_SALARY
FROM EMPLOYEE
GROUP BY DNO
ORDER BY AVG(SALARY) DESC
FETCH FIRST 1 ROW ONLY;