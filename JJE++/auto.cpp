#include <iostream>
#include <typeinfo>

using namespace std;

int main()
{
    auto a = 13;
    auto b = 3.1;
    auto c = 57l;
    auto d = "hello";
    auto e = 3.14f;

    // 데이터 타입 출력
    cout << typeid(a).name() << " " << a << endl;
    cout << typeid(b).name() << " " << b << endl;
    cout << typeid(c).name() << " " << c << endl;
    cout << typeid(d).name() << " " << d << endl;
    cout << typeid(e).name() << " " << e << endl;

    return 0;
}