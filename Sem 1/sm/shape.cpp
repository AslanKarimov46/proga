#include <iostream>
#include <vector>

int summ(const std::vector<int&> vec){
	int result=0;
	for(int i=0; i!=vec.size(); i++)
		result+=vec[i];
	return result;
}

class Shape{
public:
	Shape(const std::vector<int>& arg): arguments(arg){}
	const std::vector<int>& GetArguments() const{
		return arguments;
	}	
	virtual int Perimeter() const=0;		
	
};


class Quadrangle:public Shape{
private:
	int a, b, c, d;
public:
	Quadrangle(const std::vector<int>& arg): Shape(arg){}
	
	int Perimeter() const override{
		return summ(arg);
	}
};


class Rectangle:public Quadrangle{
private:
	int a, b
public:
	Rectangle(const std::vector<int>& arg): Quadrangle(arg){}
	int Perimeter() const override{
		return summ(arg);
	}
};


void Process(const Shape& a){
	std::cout<<a.Perimeter()<<"\n";
}

int main(){
	
	Rectangle n({1, 2, 1, 6});
	Process(n);
	
	
	
	return 0;	
}
