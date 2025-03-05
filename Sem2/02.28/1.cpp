#include <iostream>
#include <vector>
#include <variant>

union variable{
	int int_;
	char* string;
	char char_;
};


int main(){

	variable a;

	a.int_=15;
	std::cout<<a.int_<<'\n';
	std::cout<<sizeof(a.int_)<<'\n';


	return 0;
}