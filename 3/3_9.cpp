// move constructor check it!
#include <iostream>
#include <vector>
#include <string>

std::string Concatenate(const std::vector<std::string>& parts){
	std::string result;
	for(const auto& part:parts){
		result+=part;
	}
	return 0;
}

int main(){
	
	//std::string line;
	//std::getline(std::cin, line);
	std::vector<std::string> parts {"ab", "ra", "ca", "da", "bra"};
	std::cout<<Concatenate(parts)<<"\n";
	
return 0;	
}
