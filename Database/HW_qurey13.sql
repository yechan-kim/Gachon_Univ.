--���� 13: ������ �븮�� ����� ��� 2�� �̻� ���� �μ��� �̸��� �˻��϶�.
SELECT DEPTNAME
FROM DEPARTMENT, EMPLOYEE
WHERE TITLE = '�븮' AND DNO = DEPTNO
GROUP BY DEPTNAME
HAVING COUNT(*) >= 2;


