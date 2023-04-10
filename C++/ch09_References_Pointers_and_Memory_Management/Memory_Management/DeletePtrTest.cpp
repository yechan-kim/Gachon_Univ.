#include <iostream>

using namespace std;

int main()
{
    double *pd = NULL;
    cout << pd << " " << endl; // NULL 이기 때문에 0이 출력된다.
    int *p = new int;
    // 메모리에 값을 넣어본다.
    *p = 337;
    cout << p << " " << *p << endl;
    // 사용이 끝난 메모리를 해제한다.
    delete p;
    cout << p << " " << *p << endl;
    p = NULL; // NULL 이후에는 delete p를 여러번 해도 런타임 에러가 안난다.
    cout << p << endl;

    return 0;
}