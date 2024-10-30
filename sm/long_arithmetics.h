#include <iostream>
#include <deque>
//#include <cstdint>
//#include <algorithm>
#include <string>
#include <fstream>

std::deque<uint8_t> operator+(const std::deque<uint8_t>& num1, const std::deque<uint8_t>& num2);
std::deque<uint8_t> operator-(const std::deque<uint8_t>& num1, const std::deque<uint8_t>& num2);
bool operator>(const std::deque<uint8_t>& num1, const std::deque<uint8_t>& num2);
bool operator<(const std::deque<uint8_t>& num1, const std::deque<uint8_t>& num2);
bool operator==(const std::deque<uint8_t>& num1, const std::deque<uint8_t>& num2);
bool operator!=(const std::deque<uint8_t>& num1, const std::deque<uint8_t>& num2);
std::ostream& operator<<(std::ostream& out, const std::deque<uint8_t>& num);
std::istream& operator>>(std::istream& in, std::deque<uint8_t>& num);
std::deque<uint8_t> operator*(const std::deque<uint8_t>& num1, const std::deque<uint8_t>& num2);
std::deque<uint8_t> operator*(const std::deque<uint8_t>& num1, int a);
std::deque<uint8_t> operator%(const std::deque<uint8_t>& num1, const std::deque<uint8_t>& num2);
std::deque<uint8_t> part(const std::deque<uint8_t>& num, int begin, int end);
std::deque<uint8_t> str_to_deq(const std::string& str);
std::deque<uint8_t> operator/(const std::deque<uint8_t>& num1, const std::deque<uint8_t>& num2);
std::deque<uint8_t> int_to_deq(const int num);

