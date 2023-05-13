#include <iostream>
#define MAX 100

using namespace std;

class Person
{
private:
    char name[MAX];
    char phone[13];
    int age;

public:
    Person();
    Person(const char *name, const char *phone, int age);
    Person(const Person &p);
    ~Person();
    void ShowData();
};

Person::Person()
{
    name[0] = '\0';
    phone[0] = '\0';
    age = 0;
    cout << "매개변수가 없는 생성자" << endl;
}

Person::Person(const char *name, const char *phone, int age)
{
    strcpy(this->name, name);
    strcpy(this->phone, phone);
    this->age = age;
    cout << "매개변수가 있는 생성자" << endl;
}

Person::Person(const Person &p)
{
    strcpy(name, p.name);
    strcpy(phone, p.phone);
    age = p.age;
    cout << "깊은 복사 생성자" << endl;
}

Person::~Person()
{
    cout << "소멸자가 실행" << endl;
}

void Person::ShowData()
{
    cout << "name: " << name << endl;
    cout << "phone: " << phone << endl;
    cout << "age: " << age << endl;
}

int main()
{
    Person Bobby;
    Bobby.ShowData();
    Person p1("KIM", "013-333-5555", 22);
    p1.ShowData();
    Person p2(p1);
    p2.ShowData();
    return 0;
}