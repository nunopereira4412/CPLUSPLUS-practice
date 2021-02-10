#include <iostream>

using namespace std;

void doSomething(int &value) {
	value = 5;
}

int main() {

	char text[] = "hello";

	// int k = 0;

	// for(int i; i < sizeof(text); i++) {
	// 	cout << text[i] << endl;
	// }

	// //reversing char array
	// for(int i = (sizeof(text) - 1); i >= 0; i--) {
	// 	cout << text[i];
	// 	if(i == 0) {
	// 		cout << endl;
	// 	}
	// }

	// while(true) {
	// 	if(text[k] == 0) {
	// 		cout << endl;
	// 		break;
	// 	}
	// 	cout << text[k];
	// 	k++;
	// }

	int n = 10;
	cout << n << endl;
	doSomething(n);
	cout << n << endl;

 	int nChars = sizeof(text) - 1;

 	char *p = text;

 	char *end = text + nChars; //or &text[nChars]

 	for(int i = 0; i <= nChars; i++) {
 		cout << *p;
 		p++;
 	}

 	cout << endl;

 	for(int i = 0; i <= nChars; i++) {
 		cout << *end;
 		end--;
 	}

 	cout << endl;

	return 0;
}