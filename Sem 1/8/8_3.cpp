#include <iostream>
#include <map>
#include <utility>
#include <algorithm>

int main(){
	
	std::map<int, int> m {
		{1, 2},
		{2, 3},
		{3, 4}
	};
	auto it1=m.find(12);
	//auto it2=std::find(m.begin(), m.end(), 12);
	std::pair<const int, int> value {12, 31};
	auto it3=std::find(m.begin(), m.end(), value);
	
	
return 0;	
}
