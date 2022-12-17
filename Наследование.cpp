#include <iostream>

using namespace std;

class triad {
public:
    int a;
    int b;
    int c;
    triad() { a = 0; b = 0; c = 0; }
    void plus_one() {
        a++;
        b++;
        c++;
    }
    void read() {
        cout << "Input a, b, c: ";
        cin >> a >> b >> c;
    }

    void display() {
        cout << "A: " << a << endl;
        cout << "B: " << b << endl;
        cout << "C: " << c << endl;
    }
};

class Time : public triad {
public:
    void add_one() {
        plus_one();
    }
    void add_sec() {
        c++;
    }

    void addmin() {
        b++;
    }
    void show() {
        cout << "Hours: " << a << endl;
        cout << "Minutes: " << b << endl;
        cout << "Seconds: " << c << endl;
    }
};

int main()
{
    Time t1;
    t1.read();
    t1.plus_one();
    t1.add_one();
    t1.add_sec();
    t1.addmin();
    t1.show();
}