--���� 14: ��� �μ��� ���ؼ� �̸�, ��, �� �μ��� �ٹ��ϴ� ��� ���� �˻��϶�. ����� ���� �μ��� ���Խ��Ѷ�.
SELECT DEPTNAME, FLOOR, COUNT(EMPNO)
FROM DEPARTMENT, EMPLOYEE
WHERE DNO = DEPTNO
GROUP BY DEPTNAME, FLOOR; 