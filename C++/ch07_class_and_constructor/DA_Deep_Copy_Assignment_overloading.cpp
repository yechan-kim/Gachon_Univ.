#include <iostream>

using namespace std;

const int DEFAULT_ARR_SIZE = 4;
class DA
{
public:
    int *arr;
    int size;
    DA();
    DA(int size);
    DA(const DA &d);
    ~DA();
    // DA &operator=(const DA &r);
};

DA::DA()
{
    size = DEFAULT_ARR_SIZE;
    arr = new int[size];
    for (int i = 0; i < size; i++)
        arr[i] = 0;
    cout << "매개변수 없는 생성자" << endl;
}

DA::DA(int size)
{
    this->size = size;
    arr = new int[size];
    for (int i = 0; i < size; i++)
        arr[i] = 0;
    cout << "매개변수 있는 생성자" << endl;
}

DA::DA(const DA &d)
{
    size = d.size;
    arr = new int[size];
    for (int i = 0; i < size; i++)
        arr[i] = d.arr[i];
    cout << "깊은 복사 생성자" << endl;
}

DA::~DA()
{
    if (arr)
    {
        delete[] arr;
        arr = NULL;
    }
    cout << "소멸자" << endl;
}

// DA& DA::operator = (const DA& r)
// {
//     if(this != &r) //protect against invalid self-assignment
//     {
//         delete[] arr;
//         arr = new int[r.size];
//         size = r.size;
//         for (int i = 0; i < size; i++)
//         arr[i] = r.arr[i];
//     }
//     cout << "대입연산자오버로딩(복사 대입 연산자 copy assignment operator)" << endl;
//     return *this;
// }

int func1(DA d)
{
    cout << "in func1()" << endl;
    return d.size;
}

DA func2(int num)
{
    cout << "in func2()" << endl;
    DA r(num);
    return r;
}

int main()
{

    cout << "---매개변수, 리턴값이 객체인 경우---" << endl;
    DA t1(3); // t1객체가 매개변수로 전달되면서(pass-by-value) 깊은복사생성자가 불리움. pass-by-reference인 경우에는 no call 깊은복사생성자
    cout << func1(t1) << endl;
    // DA t2;
    // t2 = func2(3); // 함수에서 넘어오면서 temporary 객체가 깊은 복사로 생성되고, 복사대입연산자가 불리움.
    cout << "---매개변수, 리턴값이 객체인 경우---" << endl;

    // // 몇개의 정수를 입력할지 물어본다.
    // int size;
    // cout << "몇 개의 정수를 입력하시겠소?: ";
    // cin >> size;

    // // 필요한 만큼의 메모리를 준비한다.
    // DA da(size);

    // // 정수를 입력받는다.
    // for (int i = 0; i < size; ++i)
    // {
    //     cout << "입력";
    //     cin >> da.arr[i];
    // }

    // cout << "da 역순출력: ";
    // // 역순으로 정수를 출력한다.
    // for (int i = size - 1; i >= 0; --i)
    //     cout << da.arr[i] << " ";
    // cout << endl;

    // DA A(da);
    // // 역순으로 정수를 출력한다.
    // cout << "A 역순출력: ";
    // for (int i = A.size - 1;->= 0; --i)
    //     cout << A.arr[i] << " ";
    // cout << endl;

    // // 따로 메모리를 해제해 줄 필요가 없다.
    // DA B(da);
    // // B = A;
    // // cout << "A info: " << A.arr << " " << A.size << endl;
    // // cout << "B info: " << B.arr << " " << B.size << endl;
    // // cout << "B 역순 출력";
    // // for (int i = B.size - 1; i >= 0; --i)
    // //     cout << B.arr[i] << " ";
    // // cout << endl;
    // DA C(2);
    // // C = da;
    // // cout << "da info: " << da.arr << " " << da.size << endl;
    // // cout << "c info: " << c.arr << " " << c.size << endl;
    // // cout << "C 역순 출력";
    // // for (int i = C.size - 1; i >= 0; --i)
    // //     cout << C.arr[i] << " ";
    // // cout << endl;

    return 0;
}