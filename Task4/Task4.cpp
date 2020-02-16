#include <iostream>
using namespace std;

int main () {
	setlocale(LC_ALL, "Russian");
	int age;
	cout << "Введите возраст: ";
	cin >> age;
	if (age >= 1 && age <= 100) {
		if (age % 10 == 1) {
			cout << "Вам " << age << " ГОД" << endl;
		} else if (age % 10 >= 5) {
			cout << "Вам " << age << " ЛЕТ" << endl;
		} else {
			cout << "Вам " << age << " ГОДА" << endl;
		}
	} else {
		cout << "ERROR" << endl;
	}
}