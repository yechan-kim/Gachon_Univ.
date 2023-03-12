#include <iostream>

using namespace std;

int funcmin_idx(int B[], int size);
int funcmin_ptr(int *ip, int size);

int main()
{
    int A[5] = {0, -9, 33, -45, -19};
    int C[5] = {9, 33, -999, 23, 0};
    // A = C; //error C3863: 배열 형식 'int [5]'은(는) 할당할 수 없습니다. LHS is a int pointer 상수
    int res = funcmin_idx(A, 5);
    cout << "최소값_idx은 : " << res << endl;
    res = funcmin_ptr(C, 5);
    cout << "최소값_ptr은 : " << res << endl;
}

int funcmin_idx(int B[], int size) //배열을 받아 min알고리즘 실행
{
    int min = B[0];
    for (int i = 0; i < size; i++)
    {
        if (min > B[i])
            min = B[i];
    }
    return min;
}

int funcmin_ptr(int *ip, int size) //포인터를 받아 min알고리즘 실행
{
    int min = *ip;
    for (int i = 0; i < size; i++)
    {
        if (min > *(ip + i))
        {
            min = *(ip + i);
        }
    }
    return min;
}