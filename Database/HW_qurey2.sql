--���� 2: ����ö�� ���� �μ��� �ٹ��ϴ� ����� ���� ��� �����͸� �˻��϶�. 
SELECT *
FROM EMPLOYEE
WHERE DNO = (SELECT DNO
FROM EMPLOYEE
WHERE EMPNAME = '����ö');