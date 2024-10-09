#include "time.h"

int main(){
	
	chron::Time t1(1, 30, 38);
	chron::Time t2(3600);
	chron::Time t3(15, 3450, -38);	
	//std::cout<<t1.GetHours()<<" "<<t1.GetMinutes()<<" "<<t1.GetSeconds()<<"\n";
	//std::cout<<t2.GetHours()<<" "<<t2.GetMinutes()<<" "<<t2.GetSeconds()<<"\n";
	//std::cout<<t3.GetHours()<<" "<<t3.GetMinutes()<<" "<<t3.GetSeconds()<<"\n";
	chron::Time t;
	//std::cout<<t.GetHours()<<" "<<t.GetMinutes()<<" "<<t.GetSeconds()<<"\n";
	std::cout<<t1-t2<<"\n";
	
	return 0;	
}
