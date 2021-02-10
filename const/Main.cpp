#include <iostream>

using namespace std;

class Animal {
private:
	string _name;

public:
	Animal(string name): _name(name) {
		cout << "Animal created" << endl;
	}
	void setName(string name) /*const*/ { //const will generate error
		 _name = name;
	}
	void speak() const {
		cout << "My name is: " << _name << endl;
	}
};

int main() {

	const int n = 10;	
	// n = 5;
	cout << n << endl;

	Animal animal("random");
	animal.speak();
	animal.setName("dumbo");
	animal.speak();

	int x = 10;
	int value = 5;

	const int *p = &x;

	cout << p <<endl;
	cout << *p <<endl;

	p = &value;
	cout << *p <<endl;

	// ERRO porque *p é constante, nao posso mudar o valor inteiro
	// para o qual o ponteiro p aponta
	// *p = x;

	cout << "Now testing with const pointer" << endl;

	int * const p2 = &x;

	cout << *p2 <<endl;

	*p2 = value;
	cout << *p2 <<endl;

	//ERRO porque p é constante, nao posso mudar a referencia 
	// associada ao ponteiro p
	p2 = &value;

}