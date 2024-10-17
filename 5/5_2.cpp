#include <iostream>
#include <list>

int main(){
	
	std::list<int> l {1, 2, 3};
	l.push_back(5);
	l.push_front(0);
	l.push_back(123456);
	l.pop_back();
	l.pop_front();
	for(int i: l){
		std::cout<<i<<"\n";
	}	
return 0;	
}
