#include <iostream>
#include <deque>
#include "long_arithmetics.h"
#include <cstdint>

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

	std::deque<uint8_t> n1 ({ 1, 2, 2, 3}), n2 ({1, 2, 3, 7}), n3=n1+n2, n4=n1*n2;
	/*if(n1==n2)
		std::cout<<"n1==n2"<<"\n";
	else
		std::cout<<"n1!=n2"<<"\n";*/
	//int message=15, p=3, q=11, n=p*q, fn=(p-1)*(q-1), e=7, d=(fn+1)/e;
	//std::cout<<unscrumble( scrumble(message, e, n), d, n)<<"\n";
	//std::cout<<n1<<"\n";
	//n4=n1*4;
	int w=1223*1237;
	std::cout<<w<<"\n"<<n4<<"\n";


return 0;
}



















