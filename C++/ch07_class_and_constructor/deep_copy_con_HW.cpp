#include <iostream>
using namespace std;
const int DEFAULT_ARR_SIZE = 4;
class DA
{
private:
    int *arr;
    int size;

public:
    void setArrElement(int index, int val);
    void setSize(int size);
    int getArrElement(int index);
    int getSize();
    DA();
    DA(int s);
    DA(const DA &d);
    ~DA();
};
void DA::setArrElement(int index, int val)
{
    arr[index] = val;
}
void DA::setSize(int size)
{
    this->size = size;
}
int DA::getArrElement(int index)
{
    return arr[index];
}
int DA::getSize()
{
    return size;
}
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
int main()
{
    cout << "몇개의 정수를 입력하겠소?: ";
    int n;
    cin >> n;
    DA obj1(n); // con with parameter
    // 정수 입력받기
    for (int i = 0; i < n; i++)
    {
        cout << "입력: ";
        int num;
        cin >> num;
        obj1.setArrElement(i, num);
    }
    cout << "역순으로 출력" << endl;
    for (int i = n - 1; i >= 0; i--)
        cout << obj1.getArrElement(i) << " ";
    cout << endl;
    DA obj2(obj1); // deep copy con
    cout << "출력" << endl;
    for (int i = 0; i < obj2.getSize(); i++)
        cout << obj2.getArrElement(i) << " ";
    cout << endl;
    return 0;
}