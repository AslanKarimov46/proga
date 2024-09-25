#include <iostream>
#include <string>
#include <vector>

int main(){
	
	int* ptr=nullptr;
	{
		int x=42;
		ptr=&x;
	}
	std::cout<<*ptr<<"\n";
	//dont't do that!
return 0;	
}
