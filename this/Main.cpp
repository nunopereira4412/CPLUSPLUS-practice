#include <iostream>
#include "test.h"

using namespace std;

int main() {

	Test t;
	Test t2("joao", 34);

	cout << t.toString() << endl;
	cout << t2.toString() << endl;
	cout << t2.name << endl;

	return 0;
}