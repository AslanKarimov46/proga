#ifndef LONG_ARITHMETICS_H
#define LONG_ARITHMETICS_H
#include <iostream>
#include <deque>
#include <cstdint>


class huge_numbers{
private:
	std::deque<uint8_t> number;

public:
	huge_numbers(std::deque<uint8_t> num): number{num} {}

};

huge_numbers operator+(const huge_numbers& num1, const huge_numbers& num2); 

#endif 
