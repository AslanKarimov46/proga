#include <iostream>
#include <algorithm>
#include <vector>


int main(){
	
	std::vector<int> vec {12, 456, 789, 123, 456, 789, 396, 459};
	std::partial_sort(vec.begin(), vec.begin()+3, vec.end());
	
	for(int num: vec)
		std::cout<<num<<" ";
		
	std::cout<<"\n";
	
	
return 0;	
}
