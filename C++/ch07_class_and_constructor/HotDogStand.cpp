#include <iostream>

using namespace std;

class HotDogStand
{
private:
    int id;
    int sold;

public:
    void setId(int id);
    int getSold();
    void JustSold();
    HotDogStand();
    ~HotDogStand();

private:
    static int total_sold;

public:
    static int getTotal_sold();
};

int HotDogStand::total_sold = 0;

int HotDogStand::getTotal_sold()
{
    return total_sold;
}

void HotDogStand::setId(int id)
{
    this->id = id;
}

int HotDogStand::getSold()
{
    return sold;
}

void HotDogStand::JustSold()
{
    sold++;
    total_sold++;
}

HotDogStand::HotDogStand()
{
    id = 0;
    sold = 0;
}

HotDogStand::~HotDogStand()
{
}

int main()
{
    int count;

    cout << "Stand count(3~10): ";
    cin >> count;

    HotDogStand *sList = new HotDogStand[count];
    for (int  i = 0; i < count; i++)
        sList[i].setId(i);

    char ID;
    while (true)
    {
        cout << "ID : ";
        cin >> ID;
        if (ID == 'q')
            break;
        else if (ID - 48 > count - 1) // ID out of range excludes count (including total count)
            cout << "This ID you entered is out of the 'stand count' range you entered. This count is excluded from the count." << endl;
        else
            sList[ID - 48].JustSold(); // '0' == 48, so '0'-48 == 0
    }

    for (int i = 0; i < count; i++)
        cout << "Stand " << i << " sold " << sList[i].getSold() << endl;

    cout << "Total sold = " << HotDogStand::getTotal_sold() << endl;

    delete[] sList;

    return 0;
}