#include <iostream>
#include <algorithm>
#include <vector>


int main(){
	
	std::vector<int> vec {123, 456, 789, 123, 456, 789, 147, 258, 369, 741, 852, 963};
	if(std::binary_search(vec.begin(), vec.end(), 5))
		std::cout<<"found\n";
	else
		std::cout<<"not found\n";
	
	
return 0;	
}
