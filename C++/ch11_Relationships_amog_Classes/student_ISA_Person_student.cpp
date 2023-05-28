/**************************************************************
 * Student 클래스의 구현 파일                                 *
 **************************************************************/
#include <cassert>
#include <iostream>
#include <iomanip>

#include "student_ISA_Person_student.h"
#include "student_ISA_Person_person.h"
using namespace std;
Student::Student()
: Person() 
{
	gpa = 0.0;
}
Student::Student(long id, double gp)
: Person(id) 
{
  gpa = gp;
  assert(gpa >= 0.0 && gpa <= 4.0);
}
Student::Student(const Student& student)
: Person(student)
{
	gpa = student.gpa;
}
Student::~Student()
{
}
// 접근자 멤버 함수
void Student::print() const
{
  Person::print();
  cout << "GPA: " << fixed << setprecision(2) << gpa << endl;
}