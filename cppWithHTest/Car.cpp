#include <iostream>

#include "Car.h"

using namespace std;

string Car::getName() {
	return _name;
}

void Car::setName(string newName) {
	_name = newName;
}

string Car::toString() {
	return "toString method of car with name: ";
}

Car::Car() {
	_name = "Default";
	cout << "Car created" << endl;
}

Car::Car(string name): _name(name) {
	cout << "Car created with custom name: " << _name << endl;
}

Car::~Car() {
	cout << "Car destroyed" << endl;
}