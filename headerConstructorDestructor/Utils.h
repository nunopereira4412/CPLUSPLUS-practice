#ifndef UTILS_H_
#define UTILS_H_

class Utils {
	private:
		int happy;
	public:
		bool publicHappy;

		void printHello();
		int addNumbers(int x, int y);
		void setHappyTrue();
		Utils(int value);
		~Utils();
};

void sayHello();

#endif
