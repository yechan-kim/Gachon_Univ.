--���� 5: ��ȹ�ο� �ٹ��ϴ� ������� �̸��� ������ �˻��϶�.
SELECT EMPNAME, TITLE
FROM EMPLOYEE
WHERE DNO = (SELECT DEPTNO FROM DEPARTMENT WHERE DEPTNAME = '��ȹ');