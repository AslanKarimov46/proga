#ifndef MATRIX_H
#define MATRIX_H
#include <iostream>
#include <vector>

template <typename T>
class Matrix{
private:
	std::vector<std::vector<T>> matrix;
	void Make_Rectangle();
public:
	size_t GetRows() const;
	size_t GetColumns() const;
	Matrix(const std::vector<std::vector<T>>& d): matrix{d} { Make_Rectangle(); }
	const std::vector<T>& operator [] (size_t i) const{
		return matrix[i];
	}
	const T& operator () (size_t i, size_t j) const{
		return matrix[i][j];
	}
	using const_iterator=decltype(data.cbegin());
	const_iterator cbegin() const;
	const_iterator cend() const;
	//Matrix<T> &Matrix::operator +=(const Matrix<T>& other)
};
template <typename T>
std::ostream& operator<< (std::ostream& out, const Matrix<T>& matrix);
template <typename T>
std::istream& operator>> (std::istream& in, const Matrix<T>& matrix);*/

#endif		//MATRIX_M
