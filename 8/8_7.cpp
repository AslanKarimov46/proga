#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

int main(){
	
	std::vector vec {1, 12, 45, 32, 4};
	std::list<int> l(10);
	
	auto iter=std::copy(vec.begin(), vec.end(), l.begin());
	
	for(int num:l)
		std::cout<<num<<" ";
	
	std::cout<<"\n";
	
	l.erase(iter, l.end());

	for(int num:l)
		std::cout<<num<<" ";
			
	std::cout<<"\n";
	
return 0;	
}
