#include <iostream>
#include "time.h"

bool IsAfternoonTime(const chron::Time& time){
	return time.GetHours()>=12;
}

int main(){
	
	chron::Time t(15, 30, 38);
	//std::cout<<t.GetHours()<<"\n";
	if(IsAfternoonTime(t))
		std::cout<<t.GetHours()-12<<"Pm\n";
	
return 0;	
}
