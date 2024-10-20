#include "matrix.h"
#ifndef MATRIX_HPP
#define MATRIX_HPP

template <typename T>
size_t Matrix<T>::GetRows() const{
	return data.size();
}

template <typename T>
size_t Matrix<T>::GetColumns() const{
	if(data.empty())
		return 0;
	return data[0].size();
}

template <typename T>
void Matrix<T>Make_Rectangle(){
	int MaxSize;
	for(const auto& row:data){
		if(row.size()>MaxSize)
			MaxSize=row.size();
	}
	for(auto& row:data)
		row.resize(MaxSize);
}

template <typename T>
T& Matrix<T>::opeartor() (size_t i, size_t j){
	return data[i][j];
}
#endif //MATRIX_HPP












