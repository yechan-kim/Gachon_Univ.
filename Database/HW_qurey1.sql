--���� 1: ���� ���� �ٹ��� ����� ���� ��� �����͸� �˻��϶�.
SELECT *
FROM EMPLOYEE
WHERE HIREDATE = (SELECT MIN(HIREDATE) FROM EMPLOYEE);