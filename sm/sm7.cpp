#include <iostream>


int main(){
	
	std::string word1, word2;
	std::cin>>word1>>word2;
	std::vector<char> common_symbols;
	
	for(int i=0; i!=word1.size(); i++){
		for(int j=0; j!=word2.size(); j++){
			if(word1[i]==word2[j])
				common_symbols.push_back(word1[i]);
		}
	}
	
	while(std::cin>>word1){
		for(int i=0; i<common_symbols.size() ; i++){
			int a=0;
			for(int j=0; j<word1.size(); j++){
				if(common_symbols[i]==word1[j])
					a=1;
			}
			if(a==0){
				common_symbols[i]=common_symbols.rbegin();
				common_symbols.pop_back()
			}
		}
	}
	
return 0;	
}
