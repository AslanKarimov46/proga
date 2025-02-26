#include <iostream>

struct WrongAgeException{
	int age;
};

int ReadAge(){
	std::cin.exceptions(std::istream::failbit);
	int age;
	std::cin>>age;
	if(age<0 || age>128){
		throw WrongAgeException(age);
	}
	return age;
}


int main(){
	
	try{
		int age=ReadAge();
		std::cout<<age<<"\n";
	}catch(const WrongAgeException &ex){
		std::cerr<<"Age isn't correct:"<<ex.age<<"\n";
		return -1;
	}catch(const std::istream::failure& ex){
		std::cerr<<"Failure toread stream:"<<ex.what()<<"\n";
		return 1;
	}catch(...){
		std::cout<<"Unknown exception\n";
		return 1;
	}
	
	return 0;
}











