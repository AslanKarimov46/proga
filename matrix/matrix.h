#ifndef MATRIX_H
#define MATRIX_H
#include <iostream>
#include <vector>

template <typename T>
class Matrix{
private:
	std::vector<std::vector<T>> data;
public:
	template <typename T>
	size_t GetRows() const;
	template <typename T>
	size_t GetColumns() const;
	template <typename T>
	void Matrix<T>::Make_Rectangle();
};


#endif		//MATRIX_M
