#ifndef M1_H
#define M1_H
#include <string>
class Person{
	
	std::string name;
	int age;

public:


	void print();
	Person(std::string p_name, int p_age);
	Person(std::string p_name);
	Person(int p_age);
	Person();
	bool Compare_Ages(const Person& p1, const Person& p2);
	void age_check(const Person& p);
};


#endif