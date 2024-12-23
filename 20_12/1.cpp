#include <iostream>
#include <memory>

int main(){
	
	int* ptr=new int(147);
	std::cout<<*ptr<<"\n";
	delete ptr;
	
	std::unique_ptr<int> smart=std::make_unique<int>(17);
	
	std::cout<<*smart<<"\n";
	
	// auto smart2=smart;												// ТАК НЕЛЬЗЯ	
	
		
	
return 0;	
}
