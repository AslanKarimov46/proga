#include "time.h"

using namespace chron;

Time::Time(int h, int m, int s){
	Total_Seconds=h*3600+m*60+s;
}

void Time::normalise(){
	if(Total_Seconds<0)
		Total_Seconds+=3600*24;
	if(Total_Seconds>=3600*24)
		Total_Seconds%=3600*24;
	
}

int Time::GetHours() const{
	return Total_Seconds/3600;
}
int Time::GetMinutes() const{
	return (Total_Seconds%3600)/60;
}
int Time::GetSeconds() const{
	return Total_Seconds%60;
}

int Time::TotalSeconds() const{
	return Total_Seconds;
}

void Time::AddSeconds(int s){
	Total_Seconds+=s;
	normalise();
}

Time& Time::operator+=(int s){
	Total_Seconds+=s;
	normalise();
	return *this;					//разыменовываем
}

Time operator+(const Time&t, int s){
	return Time(t.TotalSeconds()+s);
}

int operator-(const Time& t1, const Time& t2){
	return t1.TotalSeconds()-t2.TotalSeconds();
}

std::ostream& operator<<(std::ostream& out, const Time& t){
	out<<t.GetHours()<<":"<<t.GetMinutes()<<":"<<t.GetSeconds();
	return out;
}

std::istream& operator>>(std::istream& in,  Time& t){
	int h,m,s;
	char temp;
	in>>h>>temp;
	in>>m>>temp;
	in>>s>>temp;
	t=Time(h,m,s);
return in;
}







