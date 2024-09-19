#include <iostream>
#include <vector>
#include <algorithm>

struct Date{
	int year=1970;
	int month=1;
	int day=1;
};

bool compare (const Date& lhs, const Date& rhs){
	/*if(lhs.year != rhs.year){
		return lhs.year<rhs.year;
	}
	if(lhs.month != rhs.month){
		return lhs.month<rhs.month;		
	}
	return lhs.day<rhs.day;*/
	return std::tie(lhs.year, lhs.month, lhs.day)<std::tie(rhs.year, rhs.month, rhs.day);
}

int main(){
	
	std::vector<Date> dates={
		{2020, 3, 5}, 
		{2019, 1, 3},
		{2003, 10, 24}
	};
	for(const auto& [year, month, day]:dates){
		//std::cout<<year<<"."<<month<<"."<<day<<"\n";
	}
	//std::cout<<dates[1].year<<"\n";
	//bool z=dates[0]<dates[1];
	/*if(z==true)
		std::cout<<"1"<<"\n";
	else
		std::cout<<"0"<<"\n";*/
	std::sort(dates.begin(), dates.end(), [](const Date& lhs, const Date& rhs){
		return std::tie(lhs.year, lhs.month, lhs.day)<std::tie(rhs.year, rhs.month, rhs.day);});
	for(const auto& [year, month, day]:dates){
		std::cout<<year<<"."<<month<<"."<<day<<"\n";
	}
	
return 0;	
}
