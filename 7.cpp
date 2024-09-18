#include <iostream>
#include <string>

int main(){

	std::string  str="hello world, I'm just writing something";
	//str+=' ';
	//str+="world\n";
	
	std::cout<<str<<"\n";

	//std::cout<<str.substr(3,2)<<"\n";
	//std::cout<<str.substr(1)<<"\n";

	size_t n1=str.find('o');
	size_t n2=str.find('o', n1+7);	// looks for the first 'o' from n1+7 index
	size_t n3=str.find("orld");
	
	//std::cout<<n3<<'\n';
	
	//str.insert(5,"123");
	//std::cout<<str<<"\n";
	
	//str.replace(0,4,"123456789");
	//std::cout<<str<<"\n";
	
	str.erase(4,1);
	std::cout<<str<<"\n";
return 0;	
}
