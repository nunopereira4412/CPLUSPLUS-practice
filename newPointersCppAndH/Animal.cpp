#include <iostream>
#include <sstream>

#include "Animal.h"

using namespace std;

Animal::Animal() : name("Random"), age(0) {
	cout << "No-Args constructor, Animal Created" << endl;
}

Animal::Animal(string name) : name(name), age(0) {
	cout << "1 Parameter Constructor, Animal Created" << endl;
}	

Animal::Animal(string name, int age) : name(name), age(age) {
	cout << "2 Parameter Constructor, Animal Created" << endl;
}

Animal::~Animal() {
	cout << "Destructor called" << endl;
}

Animal::Animal(const Animal &obg) {
	cout << "COPY CONSTRUCTOR, Animal created" << endl;
}

void Animal::setName(string newName) {
	name = newName;
}

void Animal::setAge(int newAge) {
	age = newAge;
}

void Animal::speak() {
	cout << this->toString() << endl;
}

Animal *Animal::returnThis() {
	return this;
}

string Animal::toString() {
	stringstream s;
	s <<  "toString called for Animal...Name: " << name << " , Age: " << age << endl;
	return s.str();
}