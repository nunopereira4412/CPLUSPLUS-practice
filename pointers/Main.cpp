#include <iostream>

using namespace std;


void change(int *nToChange) {
	cout << "2. " << *nToChange << endl;
	*nToChange = 220;
	cout << "3. " << *nToChange << endl;
}

int main() {

	int n = 10;

	cout << "1. " << n << endl;
	change(&n);
	cout << "4. " << n << endl;

	return 0;
}
