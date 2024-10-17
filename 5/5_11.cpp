#include <iostream>
#include <map>
#include <string>
#include <fstream>
#include <unordered_map>

int main(){
	
	std::unordered_map<std::string, int> freqs;
	freqs.reserve(285000);
	std::string word;
	while(std::cin>>word)
		++freqs[word];
	std::cout<<"\n";
	std::ofstream fout("147.txt");
	for(const auto& [word, freq]: freqs)
		fout<<word<<"\t"<<freq<<"\n";
	
	
return 0;	
}
