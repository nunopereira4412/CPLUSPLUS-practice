#ifndef TEST_H_
#define TEST_H_

using namespace std;

class Test {

	private:
		// string name;
		int age;

	public:
		string name;
		Test();
		Test(string name, int age);
		string toString();
};

#endif