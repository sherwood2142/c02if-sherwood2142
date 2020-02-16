#include <iostream>
using namespace std;

int main () {
	setlocale(LC_ALL, "Russian");
	int number;
	cout << "¬ведите число: ";
	cin >> number;
	if (number > 0) {
		cout << "POL" << endl;
	} else if (number < 0) {
		cout << "OTR" << endl;
	} else {
		cout << "NUL" << endl;
	}
}