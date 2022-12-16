#include <iostream>
using namespace std;

class Call
{
private:
    int first;
    double second;
public:
    Call() {};
    Call(int min, double tariff)
    {
        this->first = min;
        this->second = tariff;
    }
    ~Call() {}
    double cost()
    {
        double p = first * second;
        return p;
    }
};


int main()
{
    int time;
    double price;
    cout << "Time (min):\t";
    cin >> time;
    cout << "Price per minute:\t";
    cin >> price;

    Call c(time, price);
    cout << "The payment is: " << c.cost();

    system("pause");
    return 0;
}
