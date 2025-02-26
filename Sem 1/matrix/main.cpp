#include <iostream>
#include <vector>
#include "matrix.hpp"


int main(){
	
	Matrix<int> m ({
					{1, 2, 3, 10},
					{4, 5, 11},
					{7, 8, 9, 12}
	});
	
	/*for(int i=0; i<m.GetRows(); i++){
		for(int j=0; j<m.GetColumns(); j++){
			std::cout<<m(i,j)<<" ";
		}
		std::cout<<"\n";
	}*/
	//std::cout<<m(0,1);
	
	std::vector<int> v=m[1];
	for(auto elem: v)
		std::cout<<elem<<" ";

return 0;	
}
