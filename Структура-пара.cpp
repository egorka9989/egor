#include <iostream>
using namespace std;

struct TelConv {
    int first;
    double second;

    void Init(int f, double s);
    void Read();
    void Display();
    double cost(double h);
};

void TelConv::Init(int f, double s) {
    first = f;
    second = s;
}
void TelConv::Read() {
    cout << "Enter A: ";
    cin >> first;
    cout << "Enter B: ";
    cin >> second;
}
void TelConv::Display() {
    cout << "A: " << first << "; B: " << second << endl;
}
double TelConv::cost(h) {
    return
}
TelConv SS(double a, double b) {
    return { a,b };
}

int main() {
    TelConv c, c1;
    c.Init();
    c.Display();
    cout << endl;

    c.Read();
    c.Display();
    cout << endl;

}
