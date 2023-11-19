--질의 2: 최종철과 같은 부서에 근무하는 사원에 관한 모든 데이터를 검색하라. 
SELECT *
FROM EMPLOYEE
WHERE DNO = (SELECT DNO
FROM EMPLOYEE
WHERE EMPNAME = '최종철');