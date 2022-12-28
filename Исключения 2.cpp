//((a,b)/(c,d)=(ac+bd,bc-ad)/(cc+dd))
#include <iostream>
using namespace std;
class Complex1 {};

class Complex2 {
    string msg;
public:
    Complex2(const string& s) : msg(s) {}
    const char* message() const { return msg.c_str(); }
};

class Complex3 : public invalid_argument {
    double num;
public:
    Complex3(const string msg, double n) : invalid_argument(msg), num(n) {}
    double arg() const { return num; }
};

double root1(double a, double b, double c, double d) {
    int first, second, third;
    first = (a * c) + (b * d);
    second = (b * c) - (a * d);
    third = (c * c) + (d * d);
    return first / third, second / third;
}

double root2(double a, double b, double c, double d) throw() {
    int first, second, third;
    first = (a * c) + (b * d);
    second = (b * c) - (a * d);
    third = (c * c) + (d * d);
    return first / third, second / third;
}

double root3(double a, double b, double c, double d) throw(invalid_argument) {
    int first, second, third;
    first = (a * c) + (b * d);
    second = (b * c) - (a * d);
    third = (c * c) + (d * d);

    if (third == 0.0)
        throw invalid_argument("Деление на 0");
    return first / third, second / third;
}

double root4_1(double a, double b, double c, double d) throw(Complex1) {
    int first, second, third;
    first = (a * c) + (b * d);
    second = (b * c) - (a * d);
    third = (c * c) + (d * d);

    if (third == 0.0)
        throw Complex1();
    return first / third, second / third;
}

double root4_2(double a, double b, double c, double d) throw(Complex2) {
    int first, second, third;
    first = (a * c) + (b * d);
    second = (b * c) - (a * d);
    third = (c * c) + (d * d);
    if (third == 0.0)
        throw Complex2("Деление на 0");
    return first / third, second / third;
}

double root4_3(double a, double b, double c, double d) throw(Complex3) {
    int first, second, third;
    first = (a * c) + (b * d);
    second = (b * c) - (a * d);
    third = (c * c) + (d * d);
    if (third == 0.0)
        throw Complex3("third = 0", third);
    return first / third, second / third;
}

void launcher(double (*func)(double, double, double, double)) {
    double a, b, c, d;
    cout << "Введите a=";
    cin >> a;
    cout << "Введите b=";
    cin >> b;
    cout << "Введите c=";
    cin >> c;
    cout << "Введите d=";
    cin >> d;
    cout << "Решение уравнения: " << func(a, b, c, d) << endl;
}


int main() {
    setlocale(LC_ALL, "rus");
    cout << "Функция решения уравнения ((a,b)/(c,d)=(ac+bd,bc-ad)/(cc+dd))\n";

    try {
        launcher(root1);
    }
    catch (...) {
        cout << "Произошло исключение в функции root1" << endl;
    }

    try {
        launcher(root2);
    }
    catch (...) {
        cout << "Произошло исключение в функции root2" << endl;
    }

    try {
        launcher(root3);
    }
    catch (invalid_argument& e) {
        cout << e.what() << endl;
    }

    try {
        launcher(root4_1);
    }
    catch (Complex1) {
        cout << "Произошло исключение Complex1 в функции root4_1" << endl;
    }

    try {
        launcher(root4_2);
    }
    catch (Complex2& e) {
        cout << e.message() << endl;
    }

    try {
        launcher(root4_3);
    }
    catch (Complex3& e) {
        cout << e.what() << " " << e.arg() << endl;
    }
}