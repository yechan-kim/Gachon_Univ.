--���� 7: ����� �� �� �ٹ����� �ʴ� �μ��� �˻��϶�.
SELECT *
FROM DEPARTMENT
WHERE DEPTNO NOT IN (SELECT DNO FROM EMPLOYEE);