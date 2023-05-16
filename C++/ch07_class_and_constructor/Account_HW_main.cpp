#include <iostream>
#include <cstring>
#include "Account_HW.h"

using namespace std;

int main()
{
    Account a1;
    a1.ShowAllData();
    a1.SetId(0);
    a1.SetName("Kim");
    a1.InMoney(1000);
    a1.ShowAllData();
    a1.OutMoney(1000);
    a1.ShowAllData();
    cout << endl;

    Account a2(1, 1000, "Kimyechan");
    a2.ShowAllData();
    cout << endl;

    Account a3(a2);
    a3.ShowAllData();
    cout << endl;

    Account a4;
    a4 = a3;
    a4.ShowAllData();
    cout << "인출 성공여부: " << boolalpha << a4.OutMoney(2000) << endl;
    a4.ShowAllData();
    cout << endl;

    return 0;
}