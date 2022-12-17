#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double s, d, l, r, pi = 3.14;
	cout << "Vvedite ploshyad' kruga: ";
	cin >> s;
	r = sqrt(s / pi);
	d = r * 2;
	l = pi * d;
	cout << "Diametr: " << d << endl;
	cout << "Dlina okrujnosti: " << l;
	return 0;
}