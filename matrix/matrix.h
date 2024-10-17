#ifndef MATRIX_H
#define MATRIX_H
#include <iostream>
#include <vector>

template <typename T>
class Matrix{
private:
	std::vector<std::vector<T>> data;
	void Make_Rectangle();
public:
	Matrix(const std::vector<std::vector<T>> &d): data {d} {
		makerectangle();
	}
	size_t GetRows() const;
	size_t GetColumns() const;
	const T &operator () (size_t i, size_t j) const;
	//using const_iterator=decltype(data.cbegin());
	//const_iterator cbegin() const;
	//const_iterator cend() const;
	Matrix<T> &Matrix::operator +=(const Matrix<T>& other)
};
template <typename T>
std::ostream& operator<< (std::ostream& out, const Matrix<T>& matrix);
template <typename T>
std::istream& operator>> (std::istream& in, const Matrix<T>& matrix);

#endif		//MATRIX_M
