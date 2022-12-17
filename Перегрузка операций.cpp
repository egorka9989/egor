#include <iostream>

using namespace std;

class fraction
{
private:
    long int up;
    unsigned short int down;

public:

    fraction(long int x, short int y)
    {
        up = x;
        down = y;
    };
    fraction()
    {
        up = 0;
        down = 0;
    };
    bool equal() {
        return up == down;
    }

    fraction operator *(const fraction& other) {
        fraction temp;
        temp.up = this->up * other.up;
        temp.down = this->down * other.down;
        return temp;
    }

    fraction operator + (const fraction& other)
    {
        fraction temp;
        temp.up = this->up + other.up;
        temp.down = this->down + other.down;
        return temp;
    }

    fraction operator - (const fraction& other)
    {
        fraction temp;
        temp.up = this->up - other.up;
        temp.down = this->down - other.down;
        return temp;
    }

    void display()
    {
        cout << up << "." << down << endl;
    }

    void read() {
        cout << "Input up: ";
        cin >> up;
        cout << "input down: ";
        cin >> down;
    }
};

int main()
{
    fraction f1;
    f1.read();
    f1.display();
    cout << f1.equal() << endl;
    cout << "f2:" << endl;
    fraction f2;
    f2.read();
    f2.display();
    fraction f3 = f1 + f2;
    fraction f4 = f1 * f2;
    fraction f5 = f1 - f2;
    cout << "f3:" << endl;
    f3.display();
    cout << "f4:" << endl;
    f4.display();
    cout << "f5:" << endl;
    f5.display();

}