#include <iostream>
#include <vector>
#include <string>
#include <boost/algorithm/string.hpp>

int main(){

	std::string input="654984   9+49.5464*4649    8.005  464";
	std::vector<std::string> result;
	boost::split(result, input, boost::is_any_of("+ -*/"));

	for(auto item: result)
		std::cout<<item<<"\n";

	return 0;
}