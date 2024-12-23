#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>

using namespace boost::multiprecision;

int128_t boost_product(long long A, long long B){
	int128_t ans=(int128_t)A*B;
	return ans;
}

cpp_int boost_factorial(int num) {
	cpp_int fact=1;
	for(int i=num; i!=2; i--)
		fact*=i;

	return fact;
}

int main(){

	long long first=123452345498484;
	long long second=3216749841651684984;
	std::cout<<"Product of "<<first<<" and "<<second<<" is "<<boost_product(first, second);
	std::cout<<"\n"<<boost_factorial(4);

return 0;
}
