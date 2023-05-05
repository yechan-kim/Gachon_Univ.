#include <iostream>
#include <cstring>

#define MAX 100

using namespace std;

class Account
{
private:
    int id;
    int balance; // 잔고
    char name[MAX];

public:
    Account(int id, int balance, char name[MAX]);
    Account();
    Account(const Account &Account);
    ~Account();

    // getter & setter
    int getId() const;
    int getBalance() const;
    char *getName() const;
    void setId(int val);
    void setBalance(int val);
    void setName(char val[MAX]);

    // val 만큼 입금
    void inMoney(int val);
    // val 만큼 출금
    void outMoney(int val);
};

Account::Account(int v_id, int v_balance, char v_name[MAX])
{
    id = v_id;
    balance = v_balance;
    strcpy(name, v_name);
    cout << "매개변수가 있는 생성자를 호출하였습니다." << endl;
}
Account::Account()
{
    cout << "매개변수가 없는 생성자를 호출하였습니다." << endl;
}
Account::Account(const Account &v_Account)
{
    id = v_Account.id;
    balance = v_Account.balance;
    strcpy(name, v_Account.name);
    cout << "복사 생성자를 호출하였습니다." << endl;
}
Account::~Account()
{
    cout << "소멸자를 호출하였습니다." << endl;
}

int Account::getId() const
{
    return id;
}
int Account::getBalance() const
{
    return balance;
}
char *Account::getName() const
{
    char *temp = new char[MAX];
    strcpy(temp, name);
    return temp;
}
void Account::setId(int val)
{
    id = val;
}
void Account::setBalance(int val)
{
    balance = val;
}
void Account::setName(char val[MAX])
{
    strcpy(this->name, val);
}

void Account::inMoney(int val)
{
    balance += val;
}

void Account::outMoney(int val)
{
    balance -= val;
}

int main()
{
    Account a(1, 100, "kimyechan");
    Account b;
    Account c(a);

    b.setId(2);
    b.setBalance(200);
    b.setName("kimminsu");

    c.setId(3);
    c.setBalance(300);
    c.setName("honggildong");

    cout << endl << "ID: " << a.getId() << ", Balance: " << a.getBalance() << ", Name: " << a.getName() << endl;
    delete[] a.getName();
    cout << "ID: " << b.getId() << ", Balance: " << b.getBalance() << ", Name: " << b.getName() << endl;
    delete[] b.getName();
    cout << "ID: " << c.getId() << ", Balance: " << c.getBalance() << ", Name: " << c.getName() << endl << endl;
    delete[] c.getName();

    a.inMoney(100);
    a.outMoney(50);

    cout << "1번 통장의 입출금 정산이 완료되었습니다." << endl;
    cout << "ID: " << a.getId() << ", Balance: " << a.getBalance() << ", Name: " << a.getName() << endl << endl;
    delete[] a.getName();

    return 0;
}