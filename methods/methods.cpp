#include <iostream>
#include "utils.h"

using namespace std;

void printHell() {
	cout << "Hell" << endl;
}

int addNumbers(int x, int y) {
	return x + y;
}

string returnInput() {
	string input;
	cin >> input;
	return input;
}

int main() {

	string input;
	int result;

	printHello();
	printHell();
	result = addNumbers(5, 4);

	cout << result << endl;

	cout << (input = returnInput()) << endl;

	return 0;
}