#include <iostream>
#include <vector>

template <typename T> void Duplicate(std::vector<T>& v){

    v.insert(v.end(), v.begin(), v.end());
    
    
    /*v.reserve(2*v.size());
	for(auto it=v.begin(); it!=v.end(); it++){
		v.push_back(*it);
	}*/
}

int main(){
	
	std::vector<int> vec {1, 2, 3, 4, 5};
	
	Duplicate(vec);
	
	for(int num: vec)
		std::cout<<num<<" ";
		
return 0;	
}
