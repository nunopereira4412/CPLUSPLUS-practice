#include <iostream>

#include "Car.h"

using namespace std;

int main() {

	Car c;
	Car c2("Citroen");

	cout << "c name: " << c.getName() << endl;
	cout << "c2 name: " << c2.getName() << endl;

	c.setName(c2.getName());

	cout << "c name: " << c.getName() << endl;

	cout << "toStrings: " << endl << endl;

	cout << c.toString() << c.getName() << endl;
	cout << c2.toString() << c2.getName() << endl;

	return 0;
}