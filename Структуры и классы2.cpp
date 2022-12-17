#include < iostream >

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

    bool operator == (fraction& f1)
    {
        ((f1.up == this->up) && (f1.down == this->down));
    }

    fraction& operator = (fraction& f1)
    {
        this->up = f1.up;
        this->down = f1.down;
        return *this;
    }

    fraction operator + (fraction& f1)
    {
        fraction temp;
        temp.up = this->up + f1.up;
        int a;
        a = this->down + f1.down;
        if (a <= 65535)
            temp.down = this->down + f1.down;
        else {
            temp.up += 1;
            a -= 65531;
            temp.down = a;
        }
        return temp;
    }

    void print()
    {
        cout << up << "." << down;
    }
};

int main()
{
    setlocale(0, "");
    fraction a;
    fraction b(10, 50000);
    fraction c = b + b;

    c.print();

}
        
