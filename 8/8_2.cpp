#include <iostream>
#include <vector>
#include <algorithm>
#include <deque>


int main(){
	
	std::vector<int> vec {12, 45, 65, 14, 12, 45, 789 ,123465, 0, 0, 12};
	//std::cout<<std::count(vec.begin(), vec.end(), 12)<<"\n";
	
	std::deque<int> deq {12, 6546, 789, 0, 0, 123, 456, 74125, 65, 78, 45, 78, 120002};
	auto iter1=std::find(deq.begin(), deq.end(), 78);
	std::cout<<(iter1-deq.begin())<<"\n";  //9-0
	auto start=deq.begin();
	auto end=start+3;
	auto iter2=std::find(start, end, 6546);
	if(iter2==end)
		std::cout<<"No such element\n";
	else
		std::cout<<(iter2-deq.begin())<<"\n";
		
		
return 0;	
}
