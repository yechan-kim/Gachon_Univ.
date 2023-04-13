#include "programming_04.h"

int main()
{
    Person p("kimyechan", 23);

    cout << "Name: " << p.getName() << ", Age: " << p.getAge() << endl;

    p.setName("leedonghyun");
    p.setAge(24);

    cout << "Name: " << p.getName() << ", Age: " << p.getAge() << endl;

    return 0;
}