#include <iostream>
#include <string>
#include <vector>

int min(int a, int b){
	if(a>b) return b;
	return a;
}

int strlen(std::string word){
	int len=0;
	for(char elem: word)
		len++;
return len;
}

int LCP(std::vector<std::string> vec){
	int totallength=0;
	for(int i=0; i<min( strlen(vec[1]), strlen(vec[0]) ); i++){
		if(vec[0][i]==vec[1][i])
			totallength++;
		else break;
	}
	if(totallength==0)
		return 0;

	for(int i=2; i<vec.size(); i++){
		int len=0;
		for(int j=0; j<totallength; j++){
			if(vec[0][j]==vec[i][j])
				len++;
			else break;
		}
		if(len==0){
			return 0;
		}
		if(totallength>len)
			totallength=len;
	
	}
return totallength;
}

int main(){
	
	std::vector<std::string> words {"ema1maye", "ema12m", "emaabj"};
	std::cout<<LCP(words)<<"\n";
return 0;	
}








