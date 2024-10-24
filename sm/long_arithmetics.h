#include <iostream>
#include <deque>
#include <cstdint>
#include <algorithm>

std::deque<uint8_t> operator+(const std::deque<uint8_t>& num1, const std::deque<uint8_t>& num2);
bool operator>(const std::deque<uint8_t>& num1, const std::deque<uint8_t>& num2);
bool operator<(const std::deque<uint8_t>& num1, const std::deque<uint8_t>& num2);
//bool operator==(const std::deque<uint8_t>& num1, const std::deque<uint8_t>& num2)
std::ostream& operator<<(std::ostream& out, const std::deque<uint8_t>& num);
std::istream& operator>>(std::istream& in, std::deque<uint8_t>& num);
std::deque<uint8_t> operator*(const std::deque<uint8_t>& num1, const std::deque<uint8_t>& num2);
std::deque<uint8_t> operator*(const std::deque<uint8_t>& num1, int a);

