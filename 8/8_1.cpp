#include <iostream>
#include <algorithm>
#include <vector>

int main(){
	
	std::vector<int> vec {456, 45, 789, 123, 0, 741, 0};
	std::sort(vec.begin()+1, vec.end()-1);
	
	for(int num: vec)
		std::cout<<num<<" ";
		
	std::cout<<"\n";
	
	
	
return 0;	
}
