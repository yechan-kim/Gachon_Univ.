#include <iostream>
using namespace std;

void doIt(int *pNum);

int main()
{
    int num = 10;

    doIt(&num);
    cout << "num: " << num << endl;

    int i = 0;
    short s = 2;
    double d = 33.45;
    char c = 'A';

    int *ip = &i;
    cout << "ip: " << ip << "ip + 1: " << ip + 1 << endl;

    short *sp = &s;
    cout << "sp: " << sp << "sp + 1: " << sp + 1 << endl;

    double *dp = &d;
    cout << "dp: " << dp << "dp + 1: " << dp + 1 << endl;

    char *cp = &c;
    cout << "(void*)cp: " << (void *)cp << "(void*)(cp + 1): " << (void *)(cp + 1) << endl;

    void *vp;
    int x = 10;
    vp = &x;
    // cout << "vp: " << vp << "vp + 1: " << vp + 1 << endl; //error C2036:  'void*': 알 수 없는 크기입니다..

    return 0;
}

// Pass-by-pointer
void doIt(int *pNum)
{
    (*pNum)++; // *pNum = *pNum + 1;
}