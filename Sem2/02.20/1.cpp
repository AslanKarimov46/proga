#include <iostream>
#include <regex>
#include <string>

//\\d/.[0-1]\\d.(\\d){4})

int main(){

    std::string s {"Data 13.05.2006 popk"};
    std::regex r {"([0-2]{1}\\d)\\.[0-1]\\d.(\\d){4}"};

    std::sregex_iterator iter(s.begin(), s.end(), r);
    std::sregex_iterator end;

    while (iter != end) {
        std::cout << iter->str() << '\n';
        ++iter;
    }

	return 0;
}