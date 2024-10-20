#include <iostream>
#include <string>
#include "m1.h"

int main(){

	Person p1 ("Anatoliy", 46), p2 ("Dusmuxamed", 79);
	//p1.name="Vasya";
	//p1.age=18;

	/*if(p1.Compare_Ages(p1, p2))
		std::cout<<"Anatoliy is starshe\n";
	else
		std::cout<<"Dusmuxamed is starshe\n";*/

	p1.age_check(p1);
	//p1.print();

return 0;
}