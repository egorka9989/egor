#include <bits/stdc++.h>
using namespace std;
int main() {
	srand((int)time(0));
	int N;
	N = rand() % 10 + 1;
	float A;
	//A = rand() % 100 / 10.0;
	A = rand() % 10;
	cout << "Number A: " << A << endl;
	cout << "Number N: " << N << endl;

	double p = 1, s = 1;
	for (int i = 1; i <= N; i++) {
		p *= A * (-1);
		s += p;
		cout << i << " : " << p << " : " << s << endl;
	}
	cout << "Result: " << s << endl;
	return 0;
}