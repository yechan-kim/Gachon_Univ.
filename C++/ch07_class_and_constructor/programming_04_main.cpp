#include <iostream>
#include <string>
#include "programming_04.h"

using namespace std;

int main()
{
    Person p("kimyechan", 23);

    cout << "Name: " << p.getName() << ", Age: " << p.getAge() << endl;

    p.setName("honggildong");
    p.setAge(24);

    cout << "Name: " << p.getName() << ", Age: " << p.getAge() << endl;

    return 0;
}