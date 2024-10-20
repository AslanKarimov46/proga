#include <iostream>
#include <list>


int main(){
	
	std::list <int> l {1111, 2123, 545};
	auto iter=l.begin();
	std::cout<< *iter <<"\n";
	++iter;
	std::cout<< *iter <<"\n";
	--iter; 
	std::cout<< *iter <<"\n";
	++iter;
	std::cout<< *iter <<"\n";	
return 0;	
}
