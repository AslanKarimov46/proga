#include <iostream>
#include <list>


int main(){
	
	std::list<int> l {123, 456, 789};
	auto iter=l.begin();
	++iter;
	l.insert(iter, 5);
	
	for(auto it=l.begin(); it!=l.end(); ++it)
		if(*iter%2==0)
			it=l.erase(it);

	for(auto i: l)
		std::cout<<i<<"\n";
	
return 0;	
}
