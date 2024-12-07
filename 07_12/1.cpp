#include <cstdio>
#include <iostream>


int main(){
	
	if(std::FILE* f=std::fopen("input.txt", "r"); f!=nullptr){
		char buf[100];
		fscanf(f, "%99s", buf);
		std::cout<<"21231646464684\n";
		fclose(f);
	}else{
		std::cout<<"File open failure\n";
	}
	
return 0;	
}
