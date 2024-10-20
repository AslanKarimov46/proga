#include <iostream>
#include <vector>


int main(){
	
		int x=52;
		const int cx=13;
		int* ptr=&x;
		// ptr=&cx;
		const int* cptr=&x;
		cptr=&cx;
		int* const ptrc=&x;
		// ptrc=nullptr;
		++*ptrc;
		const int* const cptrc=&x;
		
return 0;
}
