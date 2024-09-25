#include <iostream>
#include <forward_list>
#include <iterator>

int main(){
	
	std::forward_list<int> fl {3, 42, 5};
	fl.push_front(2);		// {2, 3, 42, 5}
	//for(auto i: fl)
	//	std::cout<<i<<" ";
	//fl.push_back() error;
	auto iter=std::next(fl.begin());	// 3
	//std::cout<<*iter<<"\n";
	iter=fl.erase_after(iter);	// {2, 3, 5}
	for(auto i: fl)
		std::cout<<i<<" ";	
	fl.insert_after(iter, 4);
	for(int x: fl)
	//	std::cout<<x<<"\n";*/
		
	
return 0;	
}
