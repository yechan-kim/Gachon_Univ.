#include <iostream>
#include <string>

using namespace std;

class Person
{
private:
    string name;
    int age;

public:
    string getName() const;
    int getAge() const;
    void setName(string value);
    void setAge(int value);
    Person(string v_name, int v_age);
    ~Person();
};

string Person::getName() const
{
    return name;
}

int Person::getAge() const
{
    return age;
}

void Person::setName(string value)
{
    name = value;
}

void Person::setAge(int value)
{
    age = value;
}

Person::Person(string v_name, int v_age)
{
    name=v_name;
    age=v_age;
    cout << "매개변수가 있는 생성자가 호출 되었습니다." << endl;
}

Person::~Person()
{
    cout << "소멸자가 호출 되었습니다." << endl;
}

int main()
{
    Person p("kimyechan", 23);

    cout << "Name: " << p.getName() << ", Age: " << p.getAge() << endl;

    p.setName("honggildong");
    p.setAge(24);

    cout << "Name: " << p.getName() << ", Age: " << p.getAge() << endl;

    return 0;
}