#include <iostream>
#include <string>
#include <string_view>

int main(){
	
	std::string s {"hello world how are you"};
	std::string_view sv=s;
	sv.remove_prefix(3);
	sv.remove_suffix(6);
	std::cout<<sv<<"\n";
	std::cout<<s<<"\n";	
	
	
return 0;	
}
