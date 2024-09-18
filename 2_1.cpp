#include <iostream>
#include <vector>
#include <string>

enum class Color{
	white, 
	red, 
	green, 
	blue
};


struct Point{
	double x=0.0;
	double y=0.0;
	double z=0.0;
	Color color;		
};


int main(){
	Point point1;
	point1.color=Color::blue;
	Point point2={1.4, -2.2, -3.98, Color::red};
	point2.z=32;
	point2.x+=2;
	std::cout<<sizeof(point1)<<"\n";
	std::cout<<sizeof(double)<<"\n";
	std::cout<<sizeof(Color)<<"\n";	
return 0;	
}
