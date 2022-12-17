#include <iostream.h>
#include <vcl.h>
#include <conio.h>
#include <stdlib.h>
using namespace std;
int main()
{
	int n, i;
	float max = 0;
	cout << "Enter integer value: ";
	cin >> n;
	float* p_darr = new float[n];
	for (int i = 0; i < n; i++) {
		randomize;
		p_darr[i] = (float)(rand()) / RAND_MAX;
		cout << "Value of " << i << " element is " << p_darr[i] << endl;
	}
	for (i = 0; i < n; i++) {
		if (p_darr[i] > max)
			max = p_darr[i];
	}
	cout << "Maks element = " << max << endl;
	float b = p_darr[0];
	p_darr[0] = max;
	max = b;
	for (int i = 0; i < n; i++) {
		cout << "Value of " << i << " element is " << p_darr[i] << endl;
	}
	delete[] p_darr;
	system("pause");
	return 0;
}