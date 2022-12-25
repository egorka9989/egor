#include "conio.h"
#include <iostream>

class pair
{
protected:
    int first;
    int second;

public:
    void set_first(int t) { first = t; };
    void set_second(int t) { second = t; };
    int get_first() { return first; };
    int get_second() { return second; };
    pair(int ta = 0, int tb = 0) :first(ta), second(tb) {};
    friend bool operator > (pair, pair);
};
bool operator > (pair p1, pair p2) {
    return (p1.first > p2.first) ? (true) : ((p1.first == p2.first) ? (p1.second > p2.second) : (false));
}



class fraction : public pair
{
private:

public:
    void set_second(int t) { if (t != 0) second = t; };
    friend bool operator > (fraction, fraction);

};
bool operator > (fraction f1, fraction f2) {
    return (f1.second * f2.second > 0) ? (f1.first * f2.second > f2.first * f1.second) : (f1.first * f2.second < f2.first* f1.second);
}

int main()
{
    fraction f1(2, 3);
    fraction f2(1, 2);

    std::cout << "(" << f1.get_first() << "/" << f1.get_second() << ") + (" << f1.get_first() << "/" << f1.get_second();
    f1 = f1 + f2;
    std::cout << ") = (" << f1.get_first() << "/" << f1.get_second() << ") " << std::endl;
    getch();
    return 0;
}