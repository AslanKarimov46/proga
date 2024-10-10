#include "matrix.h"
#ifndef MATRIX_HPP
#define MATRIX_HPP

size_t Matrix<T>::GetRows() const{
	return data.size();
}

size_t Matrix<T>::GetColumns() const{
	if(data.empty())
		return 0;
	return data[0].size();
}

void Make_Rectangle(){
	int MaxSize;
	for(const auto& row:data){
		if(row.size()>MaxSize)
			MaxSize=row.size();
	}
	for(auto& row:data)
		row.resize(MaxSize);
}
