#include <iostream>
#include <vector>
#include <string>

enum class color{
	white, 
	black, 
	green, 
	orange
};

int main(){
	color color1=color::white;	
	color color2=color::black;
	color color3=color::green;
	color color4=color::orange;
		
	int value=static_cast<int>(color4);
	
	color color5=static_cast<color>(2);
	
	std::cout<<value<<"\n";	
return 0;	
}
