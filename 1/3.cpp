#include <iostream>
#include <vector>

int main (void){
	
	std::vector<int> vec {1, 2, 3, 4, 8};
	std::cout<<vec.capacity()<<"\n";
	
	vec.push_back(446);
	vec.push_back(436);
	vec.push_back(426);
	vec.push_back(416);
	vec.push_back(6);
	vec.push_back(4456);

	for(int elem: vec){
		std::cout<<elem<<"\t";
	}
	
	std::cout<<vec.capacity()<<"\n";
	
return 0;	
}
