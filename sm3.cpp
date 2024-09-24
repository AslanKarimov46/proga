#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

struct Coordinates{
	int x=0;
	int y=0;
};

double dist(int x, int y){
	return x*x+y*y;
}

int main(){

	std::vector<Coordinates> coord={
		{1, 1}, 
		{2, 5},
		{0, 10}
	};
	
	std::sort(coord.begin(), coord.end(), [](const Coordinates& lhs, const Coordinates& rhs){
		return dist(lhs.x, lhs.y)<dist(rhs.x, rhs.y);});
		
	for(const auto& [x, y]:coord){
		std::cout<<x<<"."<<y<<"\n";
	}
	
return 0;	
}
