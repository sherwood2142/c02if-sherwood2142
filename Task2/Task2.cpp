#include <iostream>
#include <cctype>
using namespace std;

int main () {
	setlocale(LC_ALL, "Russian");
	char symbol;
	cout << "Введите символ: ";
	cin >> symbol;
	if (isdigit(symbol)) {
		cout << "DIGIT" << endl;
	} else if (isupper(symbol)) {
		cout << "CAPITAL" << endl;
	} else if (islower(symbol)) {
		cout << "LOWERCASE" << endl;
	} else {
		cout << "NON-ALPHANUMERIC" << endl;
	}
}