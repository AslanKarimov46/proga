#include <iostream>
#include <set>
#include <string>
#include <unordered_set>


int main(){
	
	std::unordered_set <std::string> words;
	std::set <std::string> duplicate_words;
	std::string word;
	while(std::cin>>word){
		if(words.contains(words))
			duplicate_words.insert(word);
		else
			words.insert(word);
	}
	
	for(const auto& word: duplicate_words)
		std::cout<<word<<"\n";
		
return 0;	
}
