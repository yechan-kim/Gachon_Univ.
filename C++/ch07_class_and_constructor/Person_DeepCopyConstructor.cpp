#include <iostream>

using namespace std;

const int MAX = 20;

class Person
{
private:
    char *name;
    char *phone;
    int age;

public:
    Person();
    Person(char *name, char *phone, int age);
    Person(const Person &p);
    ~Person();
    void ShowData();
};

Person::Person()
{
    cout << "매개변수가 없는 생성자" << endl;
    name = new char[MAX];
    name[0] = '\0';
    phone = new char[MAX];
    phone[0] = '\0';
    age = 0;
}

Person::Person(char *name, char *phone, int age) // 인자 있는 생성자
{
    cout << "매개변수가 있는 생성자" << endl;
    this->name = new char[MAX];
    strcpy(this->name, name);
    this->phone = new char[MAX];
    strcpy(this->phone, phone);
    this->age = age;
}

Person::Person(const Person &p) // 깊은 복사 생성자
{
    // cout << "얕은 복사 생성자" << endl;
    // name = p.name;
    // phone = p.phone;
    // age = p.age;

    cout << "깊은 복사 생성자" << endl;
    name = new char[MAX];
    strcpy(name, p.name);
    phone = new char[MAX];
    strcpy(phone, p.phone);
    age = p.age;
}

Person::~Person()
{
    cout << "소멸자가 실행" << endl;
    delete[] name;
    name = NULL;
    delete[] phone;
    phone = NULL;
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