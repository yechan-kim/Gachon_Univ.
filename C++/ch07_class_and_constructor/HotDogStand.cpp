#include <iostream>
using namespace std;

class HotDogStand
{
private:
    int id;
    int sold;

public:
    void setId(int id);
    HotDogStand(int id, int sold);
    ~HotDogStand();
    void JustSold();
    int get_hot_dogs_sold();

private:
    static int total_hot_dogs_sold;

public:
    static int get_total_hot_dogs_sold()
    {
        return total_hot_dogs_sold;
    }
};

int HotDogStand::total_hot_dogs_sold = 0;

void setId(int id)
{
    this->id = id;
}

HotDogStand::HotDogStand(int id, int sold)
{
    this->id = id;
    this->sold = sold;
}

HotDogStand::~HotDogStand()
{
    cout << "decon" << endl;
}

void HotDogStand::JustSold()
{
    sold++;
    total_hot_dogs_sold++;
}

int HotDogStand::get_hot_dogs_sold()
{
    return sold;
}

int HotDogStand::get_total_hot_dogs_sold()
{
    return total_hot_dogs_sold;
}

int main()
{
    int count;
    count << "Stand count(3~10): ";
    cin << count;
    HotDogStand *sList = new HotDogStand[count];
    for (size_t i = 0; i < count; i++)
        sList[i].setId(i);

    stand1.JustSold();
    stand1.JustSold();
    cout << "Hot dog stand " << stand1.get_id() << " sold " << stand1.get_hot_dogs_sold() << " hot dogs" << endl;

    stand2.JustSold();
    cout << "Hot dog stand " << stand2.get_id() << " sold " << stand2.get_hot_dogs_sold() << " hot dogs" << endl;

    stand3.JustSold();
    stand3.JustSold();
    stand3.JustSold();
    cout << "Hot dog stand " << stand3.get_id() << " sold " << stand3.get_hot_dogs_sold() << " hot dogs" << endl;

    cout << "Total hot dogs sold by all hot dog stands: " << HotDogStand::get_total_hot_dogs_sold() << endl;

    return 0;
}