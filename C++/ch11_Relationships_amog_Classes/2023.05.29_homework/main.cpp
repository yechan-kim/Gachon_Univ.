#include <iostream>
#include <string>
#include "Employee.h"
#include "Permanent.h"
#include "Temporary.h"
#include "Sales.h"

using namespace std;

int main()
{
    Permanent p("Kim", 1000);
    Temporary t("Lee", 10, 100);
    Sales s("Park", 1000, 10000);

    cout << "name: " << p.GetName() << ", pay: " << p.GetPay() << endl;
    cout << "name: " << t.GetName() << ", pay: " << t.GetPay() << endl;
    cout << "name: " << s.GetName() << ", pay: " << s.GetPay() << endl;

    return 0;
}