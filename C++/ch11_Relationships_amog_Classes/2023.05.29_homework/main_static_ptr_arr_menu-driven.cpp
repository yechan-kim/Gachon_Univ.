#include <iostream>
#include <string>
#include "Employee.h"
#include "Permanent.h"
#include "Temporary.h"
#include "Sales.h"

#define MAX 100

using namespace std;

void printMenu();
void MakePermanent(Employee **E, int &CurrentIndex);
void MakeTemporary(Employee **E, int &CurrentIndex);
void MakeSales(Employee **E, int &CurrentIndex);
void Inquire(Employee **E, int &CurrentIndex);
void CleanUp(Employee **E, int &CurrentIndex);
enum
{
    MAKEPERMANENT = 1,
    MAKETEMPORARY,
    MAKESALES,
    INQUIRE,
    EXIT
};

int main()
{
    Employee *E[MAX];
    int index = 0;
    int choice;
    while (true)
    {
        printMenu();
        // menu-driven
        cout << "선택: ";
        cin >> choice;
        switch (choice)
        {
        case MAKEPERMANENT:
            MakePermanent(E, index);
            break;
        case MAKETEMPORARY:
            MakeTemporary(E, index);
            break;
        case MAKESALES:
            MakeSales(E, index);
            break;
        case INQUIRE:
            Inquire(E, index);
            break;
        case EXIT:
            CleanUp(E, index);
            return 0;
        default:
            cout << "올바르지 않은 선택을 하였습니다." << endl;
            break;
        }
    }

    return 0;
}

void printMenu()
{
    cout << "--------------MENU--------------" << endl;
    cout << "1. 정규직 고용" << endl;
    cout << "2. 계약직 고용" << endl;
    cout << "3. 영업직 고용" << endl;
    cout << "4. 고용된 직원 정보 전체 조회" << endl;
    cout << "5. 프로그램 종료" << endl;
}

void MakePermanent(Employee **E, int &CurrentIndex)
{
    string name;
    int salary;
    if (CurrentIndex < MAX)
    {
        cout << "정규직으로 고용할 직원의 이름과 월급을 입력해 주새요.: ";
        cin >> name >> salary;
        E[CurrentIndex] = new Permanent(name, salary);
        CurrentIndex++;
    }
    else
        cout << "더이상 고용을 할 수 없습니다. (최대 100명 고용가능)" << endl;
}

void MakeTemporary(Employee **E, int &CurrentIndex)
{
    string name;
    int hours, hourlyWage;
    if (CurrentIndex < MAX)
    {
        cout << "계약직으로 고용할 직원의 이름, 월 근로시간, 시급을 입력해 주새요.: ";
        cin >> name >> hours >> hourlyWage;
        E[CurrentIndex] = new Temporary(name, hours, hourlyWage);
        CurrentIndex++;
    }
    else
        cout << "더이상 고용을 할 수 없습니다. (최대 100명 고용가능)" << endl;
}

void MakeSales(Employee **E, int &CurrentIndex)
{
    string name;
    int basePay, salesRevenue;
    if (CurrentIndex < MAX)
    {
        cout << "영업직으로 고용할 직원의 이름, 기본급, 영업이익을 입력해 주새요.: ";
        cin >> name >> basePay >> salesRevenue;
        E[CurrentIndex] = new Sales(name, basePay, salesRevenue);
        CurrentIndex++;
    }
    else
        cout << "더이상 고용을 할 수 없습니다. (최대 100명 고용가능)" << endl;
}

void Inquire(Employee **E, int &CurrentIndex)
{
    for (int i = 0; i < CurrentIndex; i++)
        cout << "Name: " << (*(E + i))->GetName() << ", Pay: " << (*(E + i))->GetPay() << endl;
}

void CleanUp(Employee **E, int &CurrentIndex)
{
    for (int i = 0; i < CurrentIndex; i++)
    {
        delete E[i];
        E[i] = nullptr;
    }
}