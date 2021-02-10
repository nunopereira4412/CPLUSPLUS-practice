#include <iostream>
#include <sstream>

using namespace std;

int main() {

	string s = "Hello";
	string s2 = "World";

	stringstream ss;

	ss << s << " " << s2;

	string info = ss.str();

	cout << info << endl;

	return 0;
}

