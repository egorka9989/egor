#include <iostream>
#include<string>
#include <fstream>
#include <cmath>
#include <math.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    try
    {
        cout << "Введите значение сторон: " << endl;

        double a, b, c;
        double x, y, z;

        cin >> a >> c >> b;

        cout << y = pow((a, 2) + pow(c, 2) - pow(b, 2)) / (2 * a * c) << " " << x = pow((a, 2) + pow(b, 2) - pow(c, 2)) / (2 * a * b) << " " << z = pow((b, 2) + pow(c, 2) - pow(a, 2)) / (2 * c * b) << endl;
        cout << "Вычисления проведены успешно! " << endl;
    }
    catch (const ifstream::failure ex)
    {
        cout << ex.what() << endl;
        cout << ex.code() << endl;
        cout << "Ошибка при выполнении вычесления!" << endl;
    }

    return 0;
}