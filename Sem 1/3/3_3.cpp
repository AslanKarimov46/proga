#include <iostream>
#include <vector>


int main(){
	
	int x=42;
	int& ref=x;
	const int& cref=x;
	++x;
	++ref;
	std::cout<<&ref<<"\n";
	//++cref;                  ERROR
	
	int* ptr=&x;
	const int* ctrp=*x;
	++*ptr;
	//++*ctpr;                 ERROR
	int y=20;
	cptr=&y;
return 0;	
}
