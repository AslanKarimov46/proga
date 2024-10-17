#include <iostream>
#include <algorithm>
#include <string>
#include <unordered_map>
#include <tuple>
#include <vector>
#include <fstream>



int main(){
	
	std::unordered_map<std::string, int> fregs;
	std::string words;
	
	while(std::cin>>words)
		++fregs[words];
		
	std::vector<std::pair<std::string, int>> sortedByFregs(fregs.begin(), fregs.end());
	std::sort(sortedByFregs.begin(), sortedByFregs.end(), [](const auto& p1, const auto& p2){
		return std::tie(p2.second,p1.first)<std::tie(p1.second, p2.first);});
		
	std::ofstream fout("147.txt");	
		
	for(const auto& [word, freq]: sortedByFregs)
		fout<<word<<"\t"<<freq<<"\n"; 
	
	
return 0;	
}
