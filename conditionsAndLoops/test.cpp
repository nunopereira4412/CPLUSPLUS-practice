#include <iostream>

using namespace std;

int main() {

	int a = 5;
	bool b = true;
	char c = 'A';
	string name = "cao";
	int *p;

	p = &a;

	string s1 = "Hello";
	string s2 = "World";

	string s3 = s1 + s2;

	cout << "a: " << a << endl;
	cout << "b: " << b << endl;
	cout << "c: " << c << endl;
	cout << "name: " << name << endl;
	cout << "p: " << *p << endl;
	cout << s1 << " ";
	cout << s2 << endl;
	cout << endl << s3 << endl;

	return 0;
}