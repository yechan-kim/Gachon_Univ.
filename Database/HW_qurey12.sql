--���� 12: ��� ������� ���޺��� �׷�ȭ�ϰ�, ���� ������ ���� ��� ���� 2�� �̻��� ���޿� ���ؼ� ����, ��� ��, ���� �޿��� �˻��϶�.
SELECT TITLE, COUNT(*), AVG(SALARY) * 12
FROM EMPLOYEE
GROUP BY TITLE
HAVING COUNT(*) >= 2;
