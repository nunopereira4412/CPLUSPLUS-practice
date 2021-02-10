#include <iostream>

using namespace std;

int main() {

	string pass = "hello";

	cout << "Enter your password: " << endl;

	string input;

	cin >> input;

	if(pass != "hell" && pass == input) {
		cout << "Access granted" << endl;
	}
	else if(pass != input) {
		cout << "Access denied" << endl;	
	}

	string quitInput = "quit";

	cin >> input;

	while(input != quitInput) {
		cout << "Sorry, i wont let you get out" << endl;
		cin >> input;
	}

	do {
		cout << "Type \"quit\" to quit" << endl;
		cin >> input;
	} while(input != quitInput);

	for(int i = 0; i < 4; i++) {
		if(i == 1) continue;
		if(i == 3) break;
		cout << "for loop iteration: " << i << endl;
	}

	return 0;
}