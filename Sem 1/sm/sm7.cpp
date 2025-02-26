#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main(){
	
	std::string word;
	std::cin>>word;
	std::vector<char> common_symbols;
	common_symbols.reserve(word.size());
	
	for(size_t i=0; i!=word.size(); i++)
		common_symbols.push_back(word[i]);

	while(std::cin>>word){
		for(size_t i=0; i<common_symbols.size(); i++){
			int a=0;
			for(int j=0; j<word.size(); j++){
				if(common_symbols[i]==word[j])
					a=1;
			}
			if(a==0){
				common_symbols[i]=common_symbols[common_symbols.size()-1];
				common_symbols.pop_back();
			}
		}
	}
	
	std::sort(common_symbols.begin(), common_symbols.end());

	std::cout<<"\n";

	for(char i:common_symbols)
		std::cout<<i<<" ";

	std::cout<<"\n";

return 0;	
}
