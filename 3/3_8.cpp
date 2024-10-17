#include <iostream>
#include <string>
#include <vector>

int main(){
	
	std::vector<std::string> words {"123", "456", "789"};
	std::string& ref=words[0];
	words.clear();
	
	std::cout<<ref<<"\n";
	//undefined
return 0;	
}
