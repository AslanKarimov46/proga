#include <iostream>
#include <utility>

int main(){
	
	std::pair<std::string, int>  p {"Hello", 42};
	
	auto [worg, freg]=p;
	std::cout<<worg<<"\n"<<freg<<"\n";
return 0;	
}
