#include <iostream>
#include <algorithm>
#include <vector>

int main(){
	
	std::vector<int> vec {1, 2, 3, 58, 64, 94, 123, 456, 789, 1234, 2345, 3456, 4567, 5678, 6789, 7891};
	auto iter1=std::lower_bound(vec.begin(), vec.end(), 120);
	auto iter2=std::upper_bound(vec.begin(), vec.end(), 4561);
	
	std::cout<<*iter1<<"\n";
	
	for(auto iter=iter1; iter!=iter2; iter++)
		std::cout<<*iter<<" ";
		
	std::cout<<"\n";
	
return 0;	
}
