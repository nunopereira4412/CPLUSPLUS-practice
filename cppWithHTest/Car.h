#ifndef CAR_H_
#define CAR_H_

using namespace std;

class Car {
	private:
		string _name;
	public:
		string getName();
		void setName(string newName);
		Car();
		Car(string name);
		~Car();

		string toString();
};

#endif