#include <iostream>
#include <algorithm>
#include <string>


int main(){
	
	std::string s="Hello World!!!!!!!!";
	std::cout<<std::count_if(s.begin(), s.end(), [](char c){return 'A' <=c && c<= 'Z';})<<"\n";
	
return 0;	
}
