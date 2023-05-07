#include <iostream>
using namespace std;
const int MAX = 100;
// 1. class정의
class Student
{
private: // 인스턴스를 만들때마다 메모리확보 -> instance member 변수
    char name[MAX];
    int sNo;
    // getter, setter, constructor3개, destructor
public:
    Student();
    Student(const char *n, int s);
    Student(const Student &sobj);
    ~Student();
    char *getName(); // this: 인자를 받는 Student* -> 컴파일러가 내부적으로 해준다. (직접 입력 X)
    void setName(const char *n);
    int getSNo();
    void setSNo(int s);
};
// 2. member function 정의
Student::Student()
{
    cout << "매개변수 없는 생성자" << endl;
    sNo = 0;
    name[0] = '\0';
}
Student::Student(const char *n, int s)
{
    cout << "매개변수 있는 생성자" << endl;
    this->sNo = s;
    strcpy_s(this->name, MAX, n);
}
Student::Student(const Student &sobj)
{
    cout << "복사 생성자" << endl;
    this->sNo = sobj.sNo;
    strcpy_s(this->name, MAX, sobj.name);
}
Student::~Student()
{
    cout << "소멸자(destructor)" << endl;
}
char *Student::getName()
{
    return this->name;
}
void Student::setName(const char *n)
{
    strcpy_s(this->name, MAX, n);
}
int Student::getSNo()
{
    return this->sNo;
}
void Student::setSNo(int s)
{
    this->sNo = s;
}
// 3. application or client
void func();
int main()
{
    Student std1("Jeffrey", 123);
    /*Student std2;
    Student std3(std1);*/
    cout << "before func() call" << endl; // 객체: 1
    func();                               // std1(William), std2(James) in func() are poped
    cout << "after func() call" << endl;  // 객체: 1
    Student std2("Heffrey", 321);         // 객체: 2
    cout << "sizeof(Student): " << sizeof(Student) << endl;
    cout << "sizeof(std1): " << sizeof(std1) << endl;
    return 0;
}
void func()
{
    Student std1("Bill", 342);
    std1.setName("William");
    cout << std1.getName() << endl;
    Student std2("James", 214); // 객체: 3
}
// 매개변수 있는 생성자
// before func() call
// 매개변수 있는 생성자
// William
// 매개변수 있는 생성자
// 소멸자(destructor) -> James
// 소멸자(destructor) -> William
// after func() call
// 매개변수 있는 생성자
// 소멸자(destructor)
// 소멸자(destructor)