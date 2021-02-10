#ifndef ANIMAL_H_
#define	ANIMAL_H_

using namespace std;

class Animal {

	public: 	
		string name;
		int age;

	public:
		Animal(string name);
		Animal(string name, int age);
		Animal();
		Animal(const Animal &obj);
		~Animal();
		void setName(string newName);
		void setAge(int newAge);
		void speak();
		string toString();
		Animal *returnThis();
};

#endif