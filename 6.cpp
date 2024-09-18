// g++ -std=c++20 1.cpp                           for using standart c++20

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main(){
	
	std::vector<int> data{6, 9, 3, 1, 78};
	std::sort(data.rbegin(), data.rend());
	
	//std::ranges::sort(data);

	for(int elem: data){
		std::cout<<elem<<"\t";
	}
		
return 0;
}
