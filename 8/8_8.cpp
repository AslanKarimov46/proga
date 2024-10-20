#include <iostream>
#include <iterator>
#include <list>
#include <vector>


int main(){
	
	std::vector<int> vec {1, 45, 65, 78, 45, 0, 12, 123};
	std::list<int> l;
	
	std::copy(vec.begin(), vec.end(), std::back_inserter(l));
	
	for(int num:l)
		std::cout<<num<<" ";
	
	
return 0;	
}
