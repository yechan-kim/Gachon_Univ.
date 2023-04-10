#include <iostream>

using namespace std;

int main()
{
    auto arr = {1, 2, 3, 4, 5};

    for (auto& i : arr)
    {
        cout << i << endl;
    }
}

//과제: auto와 for를 사용한 코드 하나 만들기!