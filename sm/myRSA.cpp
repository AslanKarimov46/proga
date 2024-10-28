#include "long_arithmetics.h"


//		c=(m^e) mod n 			m=(c^d) mod n
/*int pow(int num, int pow){
	int a=1;
	for(int i=0; i!=pow; i++)
		a*=num;
	return a;
}

int scrumble(int message, int e, int n){
	return pow(message, e);             //c
}

int unscrumble(int cmessage, int d, int n){
	return pow(cmessage, d);
}*/

int main(){

	std::deque<uint8_t> n1 ({1, 2, 4}), n2 ({4, 1, 2});
	//int a=124579%412;
	//std::cout<<n1%n2<<"\n";
	
	if(n1>n2)
		std::cout<<"n1>n2"<<"\n";
	else
		std::cout<<"n1<n2"<<"\n";

	if(n1<n2)
		std::cout<<"n1<n2"<<"\n";
	else
		std::cout<<"n1>n2"<<"\n";

return 0;
}



















