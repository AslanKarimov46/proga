#include <iostream>
#include <regex>
#include <string>


int main(){

	std::string s {"12.3 + -55 + 54 * 46 - -7775.55 / 44 + 4.456"};
	std::regex r {R"(([\-]?(\d)*[\.]?(\d)* [+\-*/] )*[\-]?(\d)*[\.]?(\d)*)"};
    
    std::sregex_iterator iter(s.begin(), s.end(), r);
    std::sregex_iterator end;

    while (iter != end) {
        std::cout << iter->str() << '\n';
        ++iter;
    }

	return 0;
}