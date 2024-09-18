#include <iostream>
#include <vector>
#include <string>

int main(){
	std::vector<int>data {1,2,3,4,5};
	data.reserve(10);
	data.resize(3);
	
	for(int elem: data){
		std::cout<<elem<<"\t";
	}
	std::cout<<"\n";
	data.resize(16);
	
	for(int elem: data){
		std::cout<<elem<<"\t";
	}
	std::cout<< "capacity" <<data.capacity()<<"\n";
		
return 0;
}
