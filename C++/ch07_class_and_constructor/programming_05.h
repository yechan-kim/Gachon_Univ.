#include <iostream>
#include <string>

using namespace std;

class Address
{
private:
    int houseNo, zipcode;
    string streetName, cityName, stateName;

public:
    Address(int houseNo, string streetName, string cityName, string stateName, int zipcode);
    ~Address();
    void print_address() const;
};
