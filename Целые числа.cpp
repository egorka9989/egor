#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");

	int abc, cab;
	cout << "Трехзначное число:";
	cin >> abc;
	cout << endl;

	cab = (abc % 10) * 100 + (abc / 100) * 10 + (abc % 100 / 10);
	cout << "Полученное число:" << cab;
}