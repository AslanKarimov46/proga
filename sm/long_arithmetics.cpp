#include "long_arithmetics.h"


std::deque<uint8_t> operator+(const std::deque<uint8_t>& num1, const std::deque<uint8_t>& num2){
	std::deque<uint8_t> result;
	std::deque num_1=num1, num_2=num2;
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
	return result;
}


std::deque<uint8_t> operator-(const std::deque<uint8_t>& num1, const std::deque<uint8_t>& num2) {
    std::deque<uint8_t> num_1=num1, num_2=num2;

    while (num_2.size()<num_1.size()) {
        num_2.push_front(0);
    }
    int borrow = 0;
    for(int i=num_1.size()-1; i>=0; --i){
        int difference=num_1[i]-num_2[i]-borrow;
        if (difference<0){
            difference+=10;
            borrow=1;
        }else
            borrow = 0;
        num_1[i] = difference;
    }
    while(num_1.size()> 1&& num_1.front()==0){
        num_1.pop_front();
    }

    return num_1;
}


bool operator>(const std::deque<uint8_t>& num1, const std::deque<uint8_t>& num2){
	int size1=num1.size(), size2=num2.size();
	if(size1>size2)
		return true;
	else if(size2>size1)
		return false;
	else{
		for(int i=0; i!=size1; i++){
			if(num1[i]>num2[i])
				return true;
			if(num1[i]<num2[i])
				return false;
		}
	}
	return false;
}


bool operator<(const std::deque<uint8_t>& num1, const std::deque<uint8_t>& num2){
	return !(num1>num2);
}


bool operator==(const std::deque<uint8_t>& num1, const std::deque<uint8_t>& num2){
    if(num1.size()!=num2.size()){
        return false;
    }
    for(int i = 0;i<num1.size();++i){
        if(num1[i]!=num2[i]){
        	return false;
        }
    }
    return true;
}


bool operator!=(const std::deque<uint8_t>& num1, const std::deque<uint8_t>& num2){
	return !(num1==num2);
}


std::ostream& operator<<(std::ostream& out, const std::deque<uint8_t>& num){
	for(const int n:num)
		out<<n;
	return out;
}


std::istream& operator>>(std::istream& in, std::deque<uint8_t>& num){
	char n;
	while(in>>n)
		num.push_back(n-'0');
	return in;
}


std::deque<uint8_t> operator*(const std::deque<uint8_t>& num, int a) {
    std::deque<uint8_t> result(num.size(), 0);
	int ost=0;
    for(int i=num.size()-1;i>=0;--i){
        int n=num[i];
        int b=n*a+ost;
        result[i]=b%10;
        ost=b/10;      
    }

    while(ost>0){
        result.push_front(ost%10);
        ost/=10;
    }

    return result;
}


std::deque<uint8_t> operator*(const std::deque<uint8_t>& num1, const std::deque<uint8_t>& num2){
	std::deque<uint8_t> result;
	for(int i=0; i!=num2.size(); i++){
		std::deque<uint8_t> x=num1*num2[i];
		for(int j=0; j!=num2.size()-1-i; j++)
			x.push_back(0);
		result=result+x;
	}
	return result;
}


std::deque<uint8_t> part(const std::deque<uint8_t>& num, int begin, int end){
	std::deque<uint8_t> result;
	for(int i=begin; i<=end; i++)
		result.push_back(num[i]);
	return result;
}


std::deque<uint8_t> operator%(const std::deque<uint8_t>& num1, const std::deque<uint8_t>& num2){
	std::deque<uint8_t> num_1=num1, a, b;
	
	if(num1<num2)
		return num1;
	

	while(num_1>=num2){
		if(num_1==num2)
			return {0};
		
		a=part(num_1, 0, num2.size()-1);
		if(a<num2)
			a=part(num_1, 0, num2.size());
		std::cout<<"a="<<a<<"\n";
		for(int i=1; i!=9; i++){
			
			if( num2*i<a && num2*(i+1)>a ){
			std::cout<<"i="<<i<<"\n"<<"b=num2*i="<<num2*i<<"\n";
				b=num2*i;
				while( b.size()!=num_1.size() )
					b.push_front(0);
				std::cout<<"b="<<b<<"\n";
				num_1=num_1-b;
				std::cout<<"num_1-b="<<num_1<<"\n";

			}

		}


	}
	return num_1;
}





