#include <iostream>
#include <sstream>
#include "test.h"

using namespace std;

Test::Test():name(""), age(0) {
	// name = "";
	// age = 0;
}

Test::Test(string name, int age):name(name), age(age) {
	// this->name = name;
	// this->age = age;
}

string Test::toString() {
	stringstream ss;

	ss << "Nome: " << this->name << ", Idade: " << this->age;

	return ss.str();
}