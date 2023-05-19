#include <iostream>
#include "Account_static.h"

using namespace std;

const int ACC_MAX = 10;

void printMenu();
void MakeAccount(Account **acc, int &index, int size); //& -> index++;
void DeleteAccount(Account **acc, int &index, int size);
void Deposit(Account **acc, int &index);
void Withdraw(Account **acc, int &index);
void Inquire(Account **acc, int &index);
void CleanUp(Account **acc, int &index);

int main()
{
    cout << "2. 정적 객체배열 방식" << endl;

    Account *acc[ACC_MAX];
    int index = 0; // 실제 입력된 계좌의 수
    int choice = 0;
    while (true)
    {
        printMenu();
        cout << endl;
        cout << "선택: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            MakeAccount(acc, index, ACC_MAX);
            break;
        case 2:
            DeleteAccount(acc, index, ACC_MAX);
            break;
        case 3:
            Deposit(acc, index);
            break;
        case 4:
            Withdraw(acc, index);
            break;
        case 5:
            Inquire(acc, index);
            break;
        case 6:
            CleanUp(acc, index);
            return 0;
        default:
            cout << "선택이 틀렸습니다." << endl;
            break;
        } // switch(choice)
    }     // while(true)

    return 0;
}

void printMenu()
{
    cout << "----------MENU----------" << endl;
    cout << "1. 계좌개설" << endl;
    cout << "2. 계좌해지" << endl;
    cout << "3. 입금" << endl;
    cout << "4. 출금" << endl;
    cout << "5. 전체조회" << endl;
    cout << "6. 종료" << endl;
}

void MakeAccount(Account **acc, int &index, int size)
{
    if (index < size)
    {
        int id, bal;
        char name[NAME_LEN];
        cout << "계좌개설을 위한 입력(계좌 ID, 잔액, 이름): ";
        cin >> id >> bal >> name;
        acc[index] = new Account(id, bal, name);
        // //또는 인다 없는 생성자 call 후
        // acc[index].SetId(id);
        // acc[index].SetBalance(bal);
        // acc[index].SetName(name);
        index++;
    }
    else
        cout << "최대 " << size << "개의 계좌를 만들 수 있습니다." << endl;
}

void DeleteAccount(Account **acc, int &index, int size)
{
    if (index < size)
    {
        int id, bal;
        char name[NAME_LEN];
        cout << "계좌해지를 할 계좌ID 입력: ";
        cin >> id;
        for (int i = 0; i < index; i++)
        {
            if (acc[i]->GetId() == id)
            {
                delete acc[i];
                for (int j = i; j < index - 1; j++)
                    acc[j] = acc[j + 1];
                acc[index - 1] = NULL;
                cout << "해지완료" << endl;
                index--;
                break;
            }
        }
    }
    else
        cout << "해지 가능한 계좌가 없습니다." << endl;
}

void Deposit(Account **acc, int &index)
{
    int m, id, bal;
    bool found = false;

    cout << "계좌 ID: ";
    cin >> id;

    cout << "입금액: ";
    cin >> m;

    for (int i = 0; i < index; i++)
    {
        if (acc[i]->GetId() == id)
        {
            found = true;
            cout << "입금 전 잔고: " << acc[i]->GetBalance() << endl;
            bal = acc[i]->InMoney(m);
            cout << "입금 후 잔고: " << bal << endl;
            break;
        }
    }
    if (!found)
        cout << "존재하지 않는 ID 입니다." << endl;
}

void Withdraw(Account **acc, int &index)
{
    int m, id;
    bool found = false;

    cout << "계좌 ID: ";
    cin >> id;

    cout << "출금액: ";
    cin >> m;

    for (int i = 0; i < index; i++)
    {
        if (acc[i]->GetId() == id)
        {
            cout << "출금 전 잔고: " << acc[i]->GetBalance() << endl;
            if (acc[i]->OutMoney(m) == false)
                cout << "잔액부족" << endl;
            else
                cout << "출금 후 잔고: " << acc[i]->GetBalance() << endl;
            found = true;
            break;
        }
    }
    if (!found)
        cout << "존재하지 않는 ID 입니다." << endl;
}

void Inquire(Account **acc, int &index)
{
    for (int i = 0; i < index; i++)
        acc[i]->ShowAllData();
}

void CleanUp(Account **acc, int &index)
{
    for (int i = 0; i < index; i++)
    {
        delete acc[i];
        acc[i] = NULL;
    }
}