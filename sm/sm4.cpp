#include <iostream>
#include <string>
#include <utility>
#include <vector>

int main(){
	
	std::vector<std::pair<std::string, int>> text;
	std::string words;
	int i=0;
	
	while(std::cin>>words){

		
		if(words[0]=='l' && words[1]=='o' && words[2]=='v' && words[3]=='e'){
			
			for(int j=0; j<i; j++){
				
				if(text[j].first==words){
					
					text[i].second++;
				}
				
			}
			text.push_back(words)
			text[i].first=words;
			i++;
		}
			
	}
	
	for(int k=0; k<i; k++){
		std::cout<<text[k].first<<"  "<<text[k].second<<"  ";
	}
	std::cout<<"\n";
return 0;	
}
