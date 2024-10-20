#include "m1.h"
#include <iostream>
#include <string>


void Person::print(){
	std::cout<<name<<" "<<age<<"\n";
}

Person::Person(std::string p_name, int p_age){
	name=p_name;
	age=p_age;
	//std::cout<<"ok\n";
}

Person::Person(std::string p_name): Person(p_name, 0) {};
Person::Person(int p_age): Person("Bruno", p_age) {};
Person::Person(): Person("Bruno", 0) {};

bool Person::Compare_Ages(const Person& p1, const Person& p2){
	return p1.age>p2.age;
}

void Person::age_check(const Person& p){
	int age=p.age;
	if(age>100)
		std::cout<<"Не ври мне, тебе от силы 83\n";
	else
		std::cout<<"Молодец не врешь\n";
}