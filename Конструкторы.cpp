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
    fraction f1; //конструктор по умолчанию
    f1.read();
    f1.display();
    fraction f2 = f1; //конструктор копирования
    fraction f3 = fraction(6, 7);
    fraction f_arr[3]; //массив объектов
    f_arr[0] = f1;
    f_arr[1] = f2;
    f_arr[2] = f3;

}