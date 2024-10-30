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

	std::deque<uint8_t> 
	n1=str_to_deq("4988371234"), 
	n2=str_to_deq("578");

	long long int a=4988371200/578;
	std::cout<<n1/n2<<"\n"<<"a="<<a<<"\n";

	/*char symbol;
	std::ifstream in("message.txt");
	std::ofstream out("scrumbled_message.txt");

	while(in>>symbol){

	}

	in.close();
	out.close();


	std::ifstream in("scrumbled_message.txt");
	std::ofstream out("unscrumbled_message.txt");


	in.close();
	out.close();*/


return 0;
}



















