--���� 23: ��ȹ �Ǵ� �ѹ� �μ��� �ٹ����� �ʴ� ��� ������� �̸��� �˻��϶�.
SELECT EMPNAME
FROM EMPLOYEE
WHERE DNO NOT IN (SELECT DEPTNO
FROM DEPARTMENT
WHERE DEPTNAME = '��ȹ' OR DEPTNAME = '�ѹ�');