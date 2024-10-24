#include <iostream>
#include <deque>
#include "long_arithmetics.h"
#include <cstdint>

//		c=(m^e) mod n 			m=(c^d) mod n
int pow(int num, int pow){
	int a=1;
	for(int i=0; i!=pow; i++)
		a*=num;
	return a;
}

int scrumble(int message, int e, int n){
	return pow(message, e)%n;             //c
}

int unscrumble(int cmessage, int d, int n){
	return pow(cmessage, d)%n;
}

int main(){

	huge_numbers n1 ({1, 1, 5, 5, 6, 4, 7}), n2 ({2, 2, 4, 4, 3, 4, 2}), n3=n1+n2;
	//int message=15, p=3, q=11, n=p*q, fn=(p-1)*(q-1), e=7, d=(fn+1)/e;
	//std::cout<<unscrumble( scrumble(message, e, n), d, n)<<"\n";

return 0;
}
