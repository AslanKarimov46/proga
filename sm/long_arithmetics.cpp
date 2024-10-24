#include "long_arithmetics.h"

huge_numbers operator+(const huge_numbers& num1, const huge_numbers& num2){
	std::deque<uint8_t> result;
	std::deque<uint8_t> num_1=num1, num_2=num2;
	int size1=num1.size(), size2=num2.size();
	if(size1>=size2){
		for(int i=0; i!=size1-size2; i++)
			num_2.push_front(0);
	}else{
		for(int i=0; i!=size2-size1; i++)
			num_1.push_front(0);
	}
	int ost=0, size=num_1.size();
	for(int i=0; i!=size; i++){
		int x=num_1[size-i-1]+num_2[size-i-1]+ost;
		int elem=x%10;
		ost=x/10;
		result.push_front(elem);
		
	}
	if(ost!=0)
		result.push_front(ost);
	for(uint8_t n:result)
		std::cout<<n;
	std::cout<<"\n";
return result;
}