--���� 22: ����ö �Ǵ� �̼��ΰ� ���� ������ ���� ��� ����� ���ؼ� ����� �̸��� ������ �˻��϶�. 
SELECT EMPNAME, TITLE
FROM EMPLOYEE
WHERE TITLE IN (SELECT TITLE
FROM EMPLOYEE
WHERE EMPNAME = '����ö' or EMPNAME = '�̼���');