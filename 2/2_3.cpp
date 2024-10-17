#include <iostream>
#include <tuple>

enum class Color{
	white, 
	red, 
	green, 
	blue
};

struct Point{
	double x=2.0;
	double y=0.0;
	double z=0.0;
	Color color;		
};

int main(){
	std::tuple<int, double, Point>  t={42, 3.14, {.color=Color::green}};
	std::cout<<std::get<0>(t)<<"\n";
	std::cout<<std::get<1>(t)<<"\n";
	std::cout<<std::get<2>(t).x<<"\n";
	
	std::get<2>(t).color=Color::red;
	
return 0;	
}
