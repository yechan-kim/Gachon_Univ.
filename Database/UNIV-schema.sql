CREATE TABLE DEPARTMENT(
    DID INT,
    DNAME VARCHAR(20),
    PHONE VARCHAR(10),
    PRIMARY KEY(DID));
CREATE TABLE STUDENT(
    SID INT,
    SNAME VARCHAR(10),
    STARTYEAR INT,
    DID INT,
    PRIMARY KEY(SID),
    FOREIGN KEY(DID) REFERENCES DEPARTMENT(DID));
CREATE TABLE PROFESSOR(
    PNAME VARCHAR(10), 
    DID INT, 
    BUILDING VARCHAR(10), 
    OFFICE INT, 
    EMAIL VARCHAR(50),
    PRIMARY KEY(PNAME, DID),
    FOREIGN KEY(DID) REFERENCES DEPARTMENT(DID)); 
CREATE TABLE EXAM(
    SID INT,
    CID VARCHAR(10),
    PROFESSOR VARCHAR(10),
    GRADE CHAR(2),
    PRIMARY KEY(SID, CID),
    FOREIGN KEY(SID) REFERENCES STUDENT(SID));