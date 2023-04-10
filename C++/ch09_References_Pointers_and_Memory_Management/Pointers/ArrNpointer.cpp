#include <iostream>

using namespace std;

int main()
{
    int a = 123;
    int *ip = &a;

    cout << "address of a: " << &a << endl;
    cout << "ip: " << ip << endl; // value of ip
    cout << "address of ip: " << &ip << endl;
    cout << "ip +1 : " << ip + 1 << endl; // Bigger than ip by 1*4
    cout << "ip +4 : " << ip + 4 << endl; // Bigger than ip by 4*4

    char c = 'p';
    char *cp = &c;

    cout << "address of c: " << (void *)&c << endl;
    cout << "cp: " << (void *)cp << endl; // value of cp , FF40
    cout << "address of cp: " << (void *)&cp << endl;
    cout << "cp +1 : " << (void *)(cp + 1) << endl; // Bigger than cp by 1*1
    cout << "cp +4 : " << (void *)(cp + 4) << endl; // Bigger than cp by 4*1

    short s = 5;
    short *sp = &s;

    cout << "address of s: " << &s << endl;
    cout << "sp: " << sp << endl; // FF40
    cout << "address of sp: " << &sp << endl;
    cout << "sp +1 : " << sp + 1 << endl; // Bigger than sp by 1*2
    cout << "sp +4 : " << sp + 4 << endl; // Bigger than sp by 4*2

    short sArrays[10];
    short *ps1 = &sArrays[3];
    short *ps2 = &sArrays[7];

    // 결과를 출력한다.
    cout << &sArrays[0] << endl;
    cout << &sArrays[1] << endl;
    cout << &sArrays[2] << endl;
    cout << &sArrays[3] << endl;

    cout << "ps1 = " << ps1 << endl;
    cout << "ps2 = " << ps2 << endl;
    cout << "ps2 - ps1 = " << ps2 - ps1 << endl; // 8 / sizeof(short) = 4

    int i;
    int *q = &i;

    cout << "q: " << q << endl;
    cout << "++q: " << ++q << endl;

    q = &i;

    cout << "q++: " << q++ << endl; // 먼저 q값을 출력하고, 증가 by 4
    cout << "q: " << q << endl;

    int A[10] = {-999};

    cout << "sizeof(A) = " << sizeof(A) << endl;

    int *p = &A[0]; // int *p = A;

    // 1. 배열명을 사용한 index표현
    // 2. 배열명을 사용한 포인터 표현
    // 3. 배열명을 저장한 포인터변수를 사용한 포인터 표현
    // 4. 배열명을 저장한 포인터변수를 사용한 index 표현

    cout << "1. 배열명을 사용한 index표현" << endl;
    for (int i = 0; i < 10; i++)
        A[i] = i;
    for (int i = 0; i < 10; i++)
        cout << A[i] << " ";
    cout << endl << endl;

    cout << "2. 배열명을 사용한 포인터 표현" << endl;
    for (int i = 0; i < 10; i++)
        *(A + i) = i;
    for (int i = 0; i < 10; i++)
        cout << A[i] << " ";
    cout << endl<< endl;

    cout << "3. 배열명을 저장한 포인터변수를 사용한 포인터 표현" << endl;
    cout << "p = " << p << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << "p + " << i << " = " << p + i << endl;
        cout << "*(p + " << i << ") = " << *(p + i) << endl;
        *(p + i) = i * i * i;
    }

    cout << "p = " << p << endl;

    for (int i = 0; i < 10; i++)
        cout << A[i] << " ";

    cout << endl << endl;

    cout << "4. 배열명을 저장한 포인터변수를 사용한 index 표현" << endl;
    for (int i = 0; i < 10; i++)
        p[i] = i * i * i * i * i;

    cout << "p = " << p << endl;

    for (int i = 0; i < 10; i++)
        cout << A[i] << " ";
    cout << endl<< endl;

    cout << "3-2. 배열명을 저장한 포인터변수를 사용한 포인터 표현" << endl;
    p = &A[0];
    p = A;

    for (int i = 0; i < 10; i++)
        *++p = i * i * i; // preincrement. p is incremented by 4, and *p gets assigned

    cout << "p = " << p << endl;
    for (int i = 0; i < 10; i++)
        cout << A[i] << " ";
    cout << endl<< endl;

    return 0;
}