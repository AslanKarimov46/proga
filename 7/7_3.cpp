#include <iostream>
#include <string>
#include <map>
#include <iterator>

int main(){
	
	std::map <int, std::string> numbers {
		{100, "hundred"},
		{5, "five"},
		{7, "seven"}
	};
	auto iter=numbers.find(7);
	
	if(iter != numbers.end() ){
		const auto& [key, value]= *iter;
		std::cout<<"found "<<key<<":"<<value<<"\n";
	
		if(iter!=numbers.begin()){
			const auto& [key, value]=* std::prev(iter);
			std::cout<<"previous "<<key<<": "<<value<<"\n";
		}else{
			std::cout<<"No previouselement\n";
		}
	
		if(auto nextIter=std::next(iter); nextIter != numbers.end()){
			const auto& [key, value]= *nextIter;
			std::cout<<"Next: "<<key<<":"<<value<<"\n";
		}else{
			std::cout<<"No next element\n";
		}
	}else
		std::cout<<"Not Found\n";
	
	
return 0;	
}
