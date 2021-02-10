#include <iostream>

#include "Utils.h"

using namespace std;

int main() {

	{
	Utils u(2);

	u.printHello();
	cout << u.addNumbers(5, 9) << endl;
	}

//TO destroy earlier  	
 // 	{
	// Utils u(2);
	// }

	// u.printHello();
	// u.addNumbers(5, 9);

	sayHello();

	// cout << "TESTE: " << u.publicHappy << endl;

	return 0;
}