#include <string>
using namespace std;

#ifndef PROGRAMMING_04_H
#define PROGRAMMING_04_H

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
#endif