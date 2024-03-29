CREATE TABLE DEPARTMENT(
DEPTNO NUMBER NOT NULL, 
DEPTNAME CHAR (10), 
FLOOR NUMBER, 
PRIMARY KEY(DEPTNO)); 

CREATE TABLE EMPLOYEE( 
EMPNO NUMBER NOT NULL, 
EMPNAME CHAR (10) UNIQUE, 
TITLE CHAR (10), 
MANAGER NUMBER, 
SALARY NUMBER, 
HIREDATE DATE,
DNO NUMBER, 
PRIMARY KEY (EMPNO), 
FOREIGN KEY(MANAGER) REFERENCES EMPLOYEE(EMPNO), 
FOREIGN KEY(DNO) REFERENCES DEPARTMENT(DEPTNO)); 