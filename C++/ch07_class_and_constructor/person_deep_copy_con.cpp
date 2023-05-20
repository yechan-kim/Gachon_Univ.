#include<iostream>

using namespace std;
const int MAX = 20;
class Person
{
private:
	char *name;
	char *phone;
	int age;
public:
	Person();
	Person(char* _name, char* _phone, int _age);
	Person(const Person& p);
	~Person();
	void ShowData();
};
Person::Person()
{
	cout << "�Ű����� ���� ������" << endl;
	name=new char[MAX];
	name[0] = NULL;
	phone=new char[MAX];
	phone[0] = NULL;
    age = 0;
}
Person::Person(char* _name, char* _phone, int _age)// ���� �ִ� ������
{
	cout << "�Ű����� �ִ� ������" << endl;
	name=new char[strlen(_name)+1];
	strcpy_s(name,strlen(_name)+1, _name);
	phone=new char[strlen(_phone)+1];
	strcpy_s(phone, strlen(_phone) + 1, _phone);

	age=_age;
}
Person::Person(const Person& p)// ���������
{
	//cout << "���� ���������" << endl;
	//name = p.name;
	//phone = p.phone ;
	//age = p.age ;


	cout << "���� ���������" << endl;
	name = new char [(strlen(p.name) + 1)];
	strcpy_s(name, strlen(p.name) + 1, p.name );
	phone = new char [(strlen(p.phone)+1)] ;
	strcpy_s(phone, strlen(p.phone) + 1, p.phone );
	age = p.age ;
}
Person::~Person()
{
	cout << "�Ҹ��� ����" << endl;
	delete[] name; name = NULL;
	delete[] phone; phone = NULL;
}
void Person::ShowData()
{
	cout<<"name: "<<name<<endl;
	cout<<"phone: "<<phone<<endl;
	cout<<"age: "<<age<<endl;
}
int main()
{
	Person Bobby;
	Bobby.ShowData();
	Person p1("KIM", "013-333-5555", 22);
	p1.ShowData ();
	Person p2(p1);
	p2.ShowData ();
	return 0;
}

