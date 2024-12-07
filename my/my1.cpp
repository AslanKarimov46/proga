#include <iostream>
#include <string>
#include "m1.h"

int main(){

	Person p1 ("Anatoliy", 445), p2 ("Dusmuxamed", 79), p3 ("who", 1);
	//p1.name="Vasya";
	//p1.age=18;

	/*if(p3.Compare_Ages(p1, p2))
		std::cout<<"Anatoliy is starshe\n";
	else
		std::cout<<"Dusmuxamed is starshe\n";*/

	p3.age_check(p1);
	//p1.print();

return 0;
}