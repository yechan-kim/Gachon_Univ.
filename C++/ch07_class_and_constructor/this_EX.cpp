#include <iostream>
using namespace std;
class WhoAmI
{
private:
    int id;

public:
    WhoAmI(int v_id);
    void ShowYourSelf();
};
WhoAmI::WhoAmI(int v_id)
{
    id = v_id;
}
void WhoAmI::ShowYourSelf()
{ //==void WhoAmI::ShowYourSelf(WhoAmI* this)
    cout << "this->id : " << this->id << " , this: " << this << endl;
}
int main()
{
    WhoAmI obj; // 생성자가 없을 경우 매개변수가 없는 생성자를 컴파일러가 대신 만들어주지만, 생성자가 하나 이상 있을 경우 컴파일러는 매개변수가 없는 생성자를 만들지 않는다.
    WhoAmI obj1(1);
    WhoAmI obj2(2);
    WhoAmI obj3(3);
    cout << "&obj1: " << &obj1 << endl;
    cout << "&obj2: " << &obj2 << endl;
    cout << "&obj3: " << &obj3 << endl;
    obj1.ShowYourSelf();
    obj2.ShowYourSelf();
    obj3.ShowYourSelf();
    return 0;
}