#include <iostream>
#include <algorithm>
#include <vector>

int main(){
	
	std::vector <int> v {1, 1, 2, 3, 1, 1, 2, 2, 3, 3, 4, 5, 8};
	auto iter=std::unique(v.begin(), v.end());
	
	for(int i:v)
		std::cout<<i<<" ";
	
	std::cout<<"\n";
	v.erase(iter, v.end());
	
	for(int i:v)
		std::cout<<i<<" ";	
	std::cout<<"\n";	
	
	
return 0;	
}
