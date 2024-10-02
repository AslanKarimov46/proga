#include <iostream>
#include <algorithm>
#include <list>



int main(){
	
	std::list<int> l {1, 45, 21, 35, 46};
	//std::sort(l.begin(), l.end());
	l.sort();
	
	for(int num:l)
		std::cout<<num<<" ";
		
	std::cout<<"\n";
	
	
return 0;	
}
