/**************************************************************
 * Person 클래스와 Student 클래스를 사용하는 애플리케이션     *
 **************************************************************/

#include <iostream>
#include <cassert>
#include <iomanip>

#include "student_ISA_Person_student.h"
#include "student_ISA_Person_person.h"
using namespace std;
int main()
{
  // Person 객체 인스턴스화하고 사용
  Person person(111111111);
  cout << "Person 객체의 정보: " << endl;
  person.print();
  cout << endl;
  // Student 객체 인스턴스화하고 사용
  Student student1(222222222, 3.9);
  cout << "Student 객체의 정보: " << endl;
  student1.print();
  Student student2(322222222, 4.0);
  cout << "Student 객체의 정보: " << endl;
  student2.print();
  student1 = student2; //assignment operator overloading을 구현하지 않아도, 메모리확보가 없으므로 ok
  cout << "Student 객체의 정보: " << endl;
  student1.print();
  cout << endl;
  return 0;
}