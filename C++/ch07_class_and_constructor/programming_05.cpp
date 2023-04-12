#include "programming_05.h"

Address::Address(int value1, string value2, string value3, string value4, int value5)
    : houseNo(value1), streetName(value2), cityName(value3), stateName(value4), zipcode(value5)
{
    cout << "매개변수가 있는 생성자가 호출 되었습니다." << endl;
}

Address::~Address()
{
    cout << "소멸자가 호출 되었습니다." << endl;
}

void Address::print_address() const
{
    cout << houseNo << " " << streetName << " " << cityName << " " << stateName << " " << zipcode << endl;
}