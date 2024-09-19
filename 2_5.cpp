#include <iostream>
#include <string>

int main(){
	std::string s1="123";
	std::string& s2=s1;
	
	s1.clear();
	std::cout<<s2<<"\n"<<s1<<"\n";
	
	
	/*int x=42;
	int& y;											//ERROR!!!!!!!
	y=x;*/
	
	int x=42;
	int& y=x;
	int z=20;
	y=z;
	
	std::cout<<x<<"  "<<y<<"  "<<z<<"\n";
	
return 0;
}
