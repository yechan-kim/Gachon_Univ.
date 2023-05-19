#include <iostream>
#include <string>

using namespace std;

class Person
{
private:
    string name;
    int age;

public:
    Person();
    Person(string name, int age);
    Person(const Person &p);
    ~Person();
    void setName(string name);
    void setAge(int age);
    string getName() const;
    int getAge() const;
};

// Default Constructor
Person::Person()
{
    name[0] = '\0';
    age = 0;
    cout << "con w/o parameter" << endl;
}

// Parameter Constructor
Person::Person(string name, int age)
{
    this->name = name;
    this->age = age;
    cout << "con with parameter" << endl;
}

// Copy Constructor
Person::Person(const Person &p)
{
    this->name = p.name;
    this->age = p.age;
    cout << "copy con" << endl;
}

// Destructor
Person::~Person()
{
    cout << "destructor" << endl;
}

// Mutaor function
void Person::setName(string name)
{
    this->name = name;
}

void Person::setAge(int age)
{
    this->age = age;
}

// Accessor function
string Person::getName() const
{
    return name;
}

int Person::getAge() const
{
    return age;
}

int main()
{
    // Instantiation of two Person objects
    Person person1("Tom", 21);
    Person person2;

    // Setting name and age of person2
    person2.setName("Richard");
    person2.setAge(43);

    // Printing name and age of person1
    cout << "INFO of person1" << endl;
    cout << "Name: " << person1.getName() << ", Age: " << person1.getAge() << endl;

    // Printing name and age of person2
    cout << "INFO of person2" << endl;
    cout << "Name: " << person2.getName() << ", Age: " << person2.getAge() << endl;

    return 0;
}