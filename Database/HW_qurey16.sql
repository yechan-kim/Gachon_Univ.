--���� 16: ���ߺμ��� �ٹ��ϴ� ������� ���ް� ���޺� ��� ���� �˻��϶�. ��� ���� ���� ���޺��� ǥ���϶�. 
SELECT TITLE, COUNT(*) AS EMPLOYEE_COUNT
FROM EMPLOYEE,DEPARTMENT
WHERE DEPTNAME = '����' AND DNO = DEPTNO
GROUP BY TITLE
ORDER BY EMPLOYEE_COUNT DESC;