#ifndef MATRIX_HPP
#define MATRIX_HPP
#include "matrix.h"
#include <iostream>
#include <stdexcept>

template <typename T>
size_t Matrix<T>::GetRows() const{
	return matrix.size();
}

template <typename T>
size_t Matrix<T>::GetColumns() const{
	if(matrix.empty())
		return 0;
	return matrix[0].size();
}

template <typename T>
void Matrix<T>::Make_Rectangle(){
	int MaxSize=0;
	for(const std::vector<T>& row :matrix){
		if(row.size()>MaxSize)
			MaxSize=row.size();
	}
	for(std::vector<T>& row :matrix)
		row.resize(MaxSize);
}

template <typename T>
const_iterator Matrix<T>::begin() const{
	return matrix.begin();
}


/template <typename T>
std::ostream& operator<< (std::ostream& out, const Matrix<T>& matrix){
	const size_t rows=matrix.GetRows();
	const size_t columns=matrix.GetColumns();
	for(size_t i=0; i!=rows; i++){
		for(size_t j=0; j!=columns; j++){
			if(j>0)
				out<<"\t";
			out<<matrix(i,j);
		}
		out<<"\n";
	}
return out;
}

template <typename T>
std::istream& operator>> (std::istream& out, const Matrix<T>& matrix){
	const size_t rows=matrix.GetRows();
	const size_t columns=matrix.GetColumns();
	
	for(size_t i=0; i!=rows; i++){
		for(size_t j=0; j!=columns; j++)
			in>>matrix(i,j);
	}
return in;
}

template <typename T>
Matrix<T>& operator +=(const Matrix<T>& other){
	const size_t rows=matrix.GetRows();
	const size_t columns=matrix.GetColumns();
	if(rows!=other.GetRows() || columns!=other.GetColumns())
		throw std::invalid_argument("Different sizes");
	for(size_t i=0; i!=rows; i++){
		for(size_t j=0; j!=columns; j++)
			data[i][j]+=other.data[i][j];
	}
return *this;
}

template <typename T>
Matrix<T> operator+ (const Matrix<T>& m1; const Matrix<T>& m2){
	auto tmp {m1};
	tmp+=m2;
	return tmp;
}

template <typename T1>
bool operator== (const Matrix<T1>& other)const{
	const size_t rows=matrix.GetRows();
	const size_t columns=matrix.GetColumns();
	if(rows!=other.GetRows() || columns!=other.GetColumns())
		return false;
	for(size_t i=0; i!=rows; i++){
		for(size_t j=0; j!=columns; j++){
			if(!((*this)(i, j)==other(i, j)))
				return false;
		}
	}
return true;
}

template <typename T1, typename T2>
bool operator!=(const Matrix<T1>& m1, const Matrix<T2>& m2){
	return !(m1==m2);
}*/

#endif //matrix_hpp

