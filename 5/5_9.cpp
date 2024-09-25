#include <iostream>
#include <map>
#include <string>


int main(){
	
	std::map<std::string, int> years{
		{"hij", 789},
		{"abc", 123},
		{"hij", 786},
	};
	
	for(const auto& [city, year]: years)
		std::cout<<city<<":"<<year<<"\n";
	
	
return 0;	
}
