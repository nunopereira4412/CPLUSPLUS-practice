#include <iostream>

#include "Utils.h"

using namespace std;

Utils::Utils(int value): happy(value) {
	publicHappy = true;
}

Utils::~Utils() {
	cout << "Destroyed" << endl;
}

void Utils::printHello() {
	if(happy == 2) {
		cout << "ITS TRUE" << endl;	
	}
	else {
		cout << "Hello" << endl;
	}
}

int Utils::addNumbers(int x, int y) {
	return x + y;
}

void Utils::setHappyTrue() {
	happy = true;
}

void sayHello() {
	cout << "Hello" << endl;
}