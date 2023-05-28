/**************************************************************
 * Student 클래스의 인터페이스 파일                           *
 **************************************************************/
#ifndef STUDENT_ISA_PERSON_STUDENT_H
#define STUDENT_ISA_PERSON_STUDENT_H
#include "student_ISA_Person_person.h"
class Student: public Person {
  private: 
    double gpa;
  public:
    Student();
    Student(long identity, double gpa);
    ~Student();
    Student(const Student& student);
    void print() const;  
};
#endif