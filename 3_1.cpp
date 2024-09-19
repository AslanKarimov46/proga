#include <iostream>


int main(){
	
	const int c1=42;
	int x;
	std::cin>>x;
	const int c2=2*x;
	std::cout<<c2+1<<"\n";
	c2=5;
	//c2=0;               compilation ERROR
return 0;	
}
