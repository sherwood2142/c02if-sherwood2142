#include <iostream>
using namespace std;

int main () {
	setlocale(LC_ALL, "Russian");
	int year;
	cout << "¬ведите год: ";
	cin >> year;
	if (year >= 1582 && year <= 2200) {
		if (year % 4 == 0) {
			if (year % 100 != 0) {
				cout << "LEAP" << endl;
			} else {
				if (year % 400 == 0) {
					cout << "LEAP" << endl;
				} else {
					cout << "NORMAL" << endl;
				}
			}
		} else {
			cout << "NORMAL" << endl;
		}
	} else {
		cout << "ERROR" << endl;
	}
}