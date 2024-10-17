#include "time.h"

using namespace chron;

void Time::normalise(){
	
	minutes+=seconds/60;
	seconds%=60;
	if(seconds<0){
		minutes-=1;
		seconds+=60;
	}
	hours+=minutes/60;
	minutes%=60;
	if(minutes<0){
		hours-=1;
		minutes+=60;
	}
	hours%=24;
	if(hours<0){
		hours+=24;
	}	
}

Time::Time(int h, int m, int s):
hours(h), minutes(m), seconds(s) {normalise();}

int Time::GetHours() const{
	return hours;
}
int Time::GetMinutes() const{
	return minutes;
}
int Time::GetSeconds() const{
	return seconds;
}

void Time::AddSeconds(int s){
	seconds+=s;
	normalise();
}

Time& Time::operator+=(int s){
	seconds+=s;
	normalise();
	return *this;					//разыменовываем
}

/*Time Time::operator+(int s) const{
	return Time(hours, minutes, seconds+s);
}*/

Time operator+(const Time&t, int s){
	return (t.GetHours(), t.GetMinutes(), t.GetSeconds()+s);
}

int Time::TotalSeconds() const{
	return hours*3600+minutes*60+seconds;
}

int operator-(const Time& t1, const Time& t2){
	return t1.TotalSeconds()-t2.TotalSeconds();
}

<<<<<<< HEAD:proj1/time.cpp
std::ostream& operator<<(std::ostream& out, const Time& t){
	out<<t.GetHours()<<":"<<t.GetMinutes()<<":"<<t.GetSeconds();
=======
std::ostream& operator<<(std::ostream& out, const chron::Time& t){
	out<<t.GetHours()<<" "<<t.GetMinutes()<<" "<<t.GetSeconds();
>>>>>>> 0672ed3eafab245cebe677047ef77e25e6364884:time.cpp
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







