#include <iostream>
#include <vector>

int main(void){
	
	int x;
	std::vector<int> data;
	
	while (std::cin>>x){
		data.push_back(x);
	}
	
	while (!data.empty() && data.back()==0){
		data.pop_back();
	}
	
	for(int elem: data){
		std::cout<<elem<<"\t";
	}
	
return 0;	
}
