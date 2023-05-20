#include <iostream>
#include <cstring>

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
	Person(const char *_name, const char *_phone, int _age);
	Person(const Person &p);
	~Person();
	void ShowData();
	Person &operator=(const Person &other);
};
Person::Person()
{
	cout << "매개변수 없는 생성자" << endl;
	name = new char[MAX];
	name[0] = '\0';
	phone = new char[MAX];
	phone[0] = '\0';
	age = 0;
}
Person::Person(const char *_name, const char *_phone, int _age) // 인자 있는 생성자
{
	cout << "매개변수 있는 생성자" << endl;
	name = new char[strlen(_name) + 1];
	strcpy(name, _name);
	phone = new char[strlen(_phone) + 1];
	strcpy(phone, _phone);

	age = _age;
}
Person::Person(const Person &p) // 복사생성자
{
	// cout << "얕은 복사생성자" << endl;
	// name = p.name;
	// phone = p.phone ;
	// age = p.age ;

	cout << "깊은 복사생성자" << endl;
	name = new char[(strlen(p.name) + 1)];
	strcpy(name, p.name);
	phone = new char[(strlen(p.phone) + 1)];
	strcpy(phone, p.phone);
	age = p.age;
}
Person::~Person()
{
	cout << "소멸자 실행" << endl;
	delete[] name;
	name = NULL;
	delete[] phone;
	phone = NULL;
}
Person &Person::operator=(const Person &other)
{
	cout << "깊은 대입 연산자 overloading" << endl;
	if (this != &other)
	{
		delete[] name;
		name = new char[strlen(other.name) + 1];
		strcpy(name, other.name);
		delete[] phone;
		phone = new char[strlen(other.phone) + 1];
		strcpy(phone, other.phone);
		age = other.age;
	}
	return *this;
}
void Person::ShowData()
{
	cout << "name: " << name << endl;
	cout << "phone: " << phone << endl;
	cout << "age: " << age << endl;
}
int main()
{
	Person Bobby;
	Bobby.ShowData();
	Person p1("KIM", "013-333-5555", 22);
	p1.ShowData();
	Person p2(p1);
	p2.ShowData();
	Person p3;
	p3 = p1;
	p3.ShowData();
	return 0;
}