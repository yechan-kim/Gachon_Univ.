#include <iostream>

using namespace std;

void sub(int i, int *p, int &r);
void swap_passbyValue(int x, int y);
void swap_passbyPointer(int *xp, int *yp);
void swap_passbyReference(int &xr, int &yr);
void UsingArray1(int arr[]);
void UsingArray2(int *ip);
void UsingArray1_C(char arr[]);
void UsingArray2_C(char *ip);

int main()
{
    int a, b, c;
    a = 1;
    b = 2;
    c = 5;

    sub(a, &b, c);
    cout << "a=" << a << ", b=" << b << ", c=" << c << endl;

    // 사용자로 부터 두 수를 받아서 출력하고, swap후의 변화된 값도 출력하기
    int i, j;

    cout << "i 값: ";
    cin >> i;

    cout << "j 값: ";
    cin >> j;

    cout << endl
         << "입력된 i: " << i << ",  j: " << j << endl;

    cout << "&i: " << &i << ", &j: " << &j << endl;

    swap_passbyValue(i, j);
    cout << endl
         << "in main swap_callbyValue 콜이후 i: " << i << ",  j: " << j << endl;

    swap_passbyPointer(&i, &j);
    cout << endl
         << "in main swap_callbyPointer 콜이후 i: " << i << ",  j: " << j << endl;

    swap_passbyReference(i, j);
    cout << endl
         << "in main swap_callbyReference 콜이후 i: " << i << ",  j: " << j << endl;

    // 배열을 만들고 초기화한다.
    int A[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    cout << "In main A: " << A << endl;

    // 함수에 배열을 넘겨준다.
    UsingArray1(A);

    // 함수 호출 후의 배열 상태를 출력한다.
    cout << "In main() after UsingArray1 A[5]: " << A[5] << endl;

    // 함수에 배열을 넘겨준다.
    UsingArray2(A);

    // 함수 호출 후의 배열 상태를 출력한다.
    cout << "In main() after UsingArray2 A[6]: " << A[6] << endl;

    char B[] = "Hello World?";
    cout << "In main B: " << (void *)B << endl;

    UsingArray1_C(B);
    cout << B << endl;

    UsingArray2_C(B);
    cout << B << endl;

    return 0;
}

void sub(int i, int *p, int &r)
{
    i = 10;
    *p = 20;
    r = 50;
}

void swap_passbyValue(int x, int y)
{
    cout << "in passbyValue &x: " << &x << ", &y: " << &y;

    int temp;
    temp = x;
    x = y;
    y = temp;
}

void swap_passbyPointer(int *xp, int *yp)
{
    cout << "in passbyPointer &xp: " << &xp << ", &yp: " << &yp;

    int temp;
    temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void swap_passbyReference(int &xr, int &yr)
{
    cout << "in passbyReference &xr: " << &xr << ", &yr: " << &yr;

    int temp;
    temp = xr;
    xr = yr;
    yr = temp;
}

void UsingArray1(int arr[])
{
    cout << "In UsingArray1 arr: " << arr << ", &arr" << &arr << endl;
    // 배열의 원소 하나를 수정해본다.
    arr[5] = 55;
}

void UsingArray2(int *ip)
{
    cout << "In UsingArray2 ip: " << ip << ", &ip" << &ip << endl;
    // 배열의 원소 하나를 수정해본다.
    *(ip + 6) = 66;
}

void UsingArray1_C(char arr[])
{
    cout << "In UsingArray1 arr: " << (void *)arr << ", &arr" << &arr << endl;
    // 배열의 원소 하나를 수정해본다.
    arr[5] = '!';
}

void UsingArray2_C(char *ip)
{
    // 념겨받은 배열을 출력한다.
    cout << "In UsingArray2 ip: " << (void *)ip << ", &ip" << &ip << endl;
    // 배열의 원소 하나를 수정해본다.
    *(ip + 5) = '!';
}