#include <iostream>
#include <vector>
#include <string>

int main(void){
	
	std::vector<int> vec {1, 2, 3, 4, 8};

	
	for(int elem: vec){
		std::cout<<elem<<"\t";
	}
	
	//std::cout << data.at(0) <<"\n"; 
	std::cout << data.size() <<"\n";	

	//std::cout << vec.front() <<"\n"; 
	//std::cout << vec.back() <<"\n";
	
	int *t= vec.data();
	std::cout << *t;
	
	std::vector<std::string> v1;
	std::vector<std::string> v2(5);   // 5 elements
	std::vector<std::string> v3(5, "hello");   // 5 elements "hello"*/

	
	std::cout<<"\n";
	
		return 0;	
}
