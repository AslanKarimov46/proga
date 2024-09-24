#include <iostream>
#include <vector>

std::vector<std::vector<int>> transpon(const std::vector<std::vector<int>>& matrix){
	int width=matrix.size(), length=matrix[0].size();
	std::vector<std::vector<int>> transp_matrix(length, std::vector<int>(width));
	
	for(int i=0; i<length; i++){
		for(int j=0; j<width; j++){
			transp_matrix[i][j]=matrix[j][i];
		}
	}
return transp_matrix;
}

void print(const std::vector<std::vector<int>>& matrix){
	for(int i=0; i<matrix.size(); i++){
		for(int j=0; j<matrix[0].size(); j++){
			std::cout<<matrix[i][j]<<" ";
		}
		std::cout<<"\n";
	}	
}

int main(){
	std::vector<std::vector<int>> matrix { {1, 2, 3, 4}, {2, 3, 4, 5}, {4, 5, 6, 7}};
	
	//std::vector<std::vector<int>> transp_matrix=transpon(matrix);
	print(transpon(matrix));	
return 0;	
}
