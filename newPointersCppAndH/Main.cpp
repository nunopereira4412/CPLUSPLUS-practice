#include <iostream>

#include "Animal.h"

using namespace std;

int main() {

	Animal *cao = new Animal();
	Animal gato("gato");
	Animal porco("porco", 10);

	cao->speak();
	gato.speak();
	porco.speak();

	cao->setName("efafs");
	cao->setAge(54342);
	cao->speak();
	delete cao;

	Animal fsfffsdfs;
	cout << sizeof(cao) << endl;
	cout << sizeof(*cao) << endl;
	cout << sizeof(porco) << endl;

	Animal *cao2 = gato.returnThis();

	cao2->setName("Alert");
	cao2->speak();
	gato.speak();


	//copy constructor
	Animal girafa = gato;
	
	girafa.setName("Girafa");
	girafa.speak();
	gato.speak();
}