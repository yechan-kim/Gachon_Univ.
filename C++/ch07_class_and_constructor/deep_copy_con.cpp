#include <iostream>
using namespace std;
const int DEFAULT_ARR_SIZE = 4;
class DA
{
public:
    int *arr;
    int size;

public:
    DA();
    DA(int s);
    DA(const DA &d);
    ~DA();
};
DA::DA()
{
    this->size = DEFAULT_ARR_SIZE;
    arr = new int[this->size];
    for (int i = 0; i < this->size; i++)
        arr[i] = 0;
    cout << "con without parameter" << endl;
}
DA::DA(int s)
{
    this->size = s;
    arr = new int[this->size];
    for (int i = 0; i < this->size; i++)
        arr[i] = 0;
    cout << "con with parameter" << endl;
}
DA::DA(const DA &d)
{
    this->size = d.size;
    arr = new int[this->size];
    for (int i = 0; i < this->size; i++)
        arr[i] = d.arr[i];
    cout << "deep copy con" << endl;
}
DA::~DA()
{
    if (arr)
    { // arr!=NULL;
        delete[] arr;
        arr = NULL;
    }
    cout << "decon" << endl;
}
// client
int func1(DA d); // == DA d(obj3)
int func2(DA &d);
int main()
{
    DA obj3(10); // con with parameter
    cout << "Pass-By-Value" << endl;
    int m = func1(obj3); // deep copy con call
    cout << "Pass-By-Reference" << endl;
    int k = func2(obj3); // any con not call
    cout << m << endl;
    cout << "몇개의 정수를 입력하겠소?: ";
    int n;
    cin >> n;
    DA obj1(n); // con with parameter
    // 정수 입력받기
    for (int i = 0; i < n; i++)
    {
        cout << "입력: ";
        cin >> obj1.arr[i]; // kind of setter need
    }
    cout << "역순으로 출력" << endl;
    for (int i = n - 1; i >= 0; i--)
    {
        cout << obj1.arr[i] << " "; // kind of getter need
    }
    cout << endl;
    DA obj2(obj1); // deep copy con
    cout << "출력" << endl;
    for (int i = 0; i < obj2.size; i++)
    {
        cout << obj2.arr[i] << " "; // kind of getter need
    }
    cout << endl;
    return 0;
}
int func1(DA d)
{
    cout << "in func1()" << endl;
    return d.size;
}
int func2(DA &d)
{
    cout << "in func2()" << endl;
    return d.size;
}