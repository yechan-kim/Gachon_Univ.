#include <iostream>

using namespace std;

int main()
{
    for (int i = 0; i < 5; i++)
    {
        int sum = 0;
        for (int j = 0; j < 10; j++)
            sum += rand() % 90 + 10;
        cout << i + 1 << "번째 세트의 합은" << sum << "입니다." << endl;
    }

    return 0;
}