#include <iostream>
using namespace std;
const int MAX = 100;
class Student
{
private: // instance 끼리만 -> code의 readablity를 위해
    char name[MAX];
    int sNo;

public: // 생성자 소멸자 getter setter
    Student();
    Student(const char *name, int sNo);
    Student(const Student &s);
    ~Student();
    /*char* getName(); //homework
    int getSNo();
    void setName(const char* name);
    void setSNo(int sNo);*/
private:            // static 끼리만
    static int cnt; // 생성자 & 소멸자에서 증가 및 감소
public:
    static void PrintCount();
    // getter
    static int getCnt();
};
int Student::cnt = 0; // static member data 초기화
Student::Student()
{
    sNo = 0;
    name[0] = '\0';
    cnt++;
    cout << "매개변수가 없는 생성자 호출" << endl;
}
Student::Student(const char *name, int sNo)
{
    strcpy_s(this->name, MAX, name); // this->name : member data , name : 매개변수
    this->sNo = sNo;
    cnt++;
    cout << "매개변수가 있는 생성자 호출" << endl;
}
Student::Student(const Student &s)
{
    strcpy_s(this->name, MAX, s.name);
    this->sNo = s.sNo;
    cnt++;
    cout << "복사 생성자 호출" << endl;
}
Student::~Student()
{
    cnt--;
    cout << "소멸자 호출" << endl;
}
// char* Student::getName()
// int Student::getSNo()
// void Student::setName(const char* name)
// void Student::setSNo(int sNo)
void Student::PrintCount()
{
    cout << "in PrintCount() Studnet 객제 수: " << cnt << endl;
}
int Student::getCnt()
{
    return cnt;
}
// application start
void Func(); // 함수 선언 or function prototype
int main()
{
    cout << "sizeof(Student): " << sizeof(Student) << endl;
    Student::PrintCount(); // == 0
    Student s1("Jeffrey", 123);
    Student::PrintCount(); // == 1
    s1.PrintCount();       // 비추
    Func();
    cout << "After Func() call" << endl;
    Student::PrintCount(); // == 1
    Student s2("Heffrey", 134);
    Student::PrintCount(); // == 2
    return 0;
}
void Func()
{ // 함수 정의 or 구현
    Student std1("Bill", 587);
    Student std2("James", 214);
    Student::PrintCount(); // == 3
}