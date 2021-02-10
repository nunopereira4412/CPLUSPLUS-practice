#include <iostream>

using namespace std;

class Test {

	private:
		string name;

	private:
		string getName() { return name;}

	public:

		Test(string name): name(name) {
			cout << "Test class = Super class constructor called" << endl;
		}
		~Test() {
			cout << "Test destructor called" << endl;
		}

		virtual void info() = 0;

		void someMethod() {
			cout << "Test Class: someMethod called" << endl;
		}
};

class Test2 : public Test {

	private:
		string name;
		int _age;

	public:
		Test2(string name, int age):Test(name), _age(age) {
			cout << "Test2 = subclass instance created" << endl;
		} 
		~Test2() {
			cout << "Test2 destructor called" << endl;
		}

		void info() {
			cout << "NOTHING TO DO" << endl;
		}

		void info(string text) {
			cout << text << endl;
		}

};

int main() {

	// Test t("nomeQualquer");
	Test2 t2("joao", 40);

	// t.someMethod();
	t2.info();
	t2.info("csdivjnvdsabjbdsvdlsabvj");
	t2.someMethod();

	//erro, getName() é privado
	// cout << t2.getName() << endl;

	return 0;
}