#include "time.h"


using namespace chron;
Time::Time(int h, int m, int s){
	
	m+=s/60;
	s%=60;
	if(s<0){
		m-=1;
		s+=60;
	}
	h+=m/60;
	m%=60;
	if(m<0){
		h-=1;
		m+=60;
	}
	h%=24;
	if(h<0){
		h+=24;
	}
	hours=h;
	minute=m;
	seconds=s;
}
int Time::GetHours() const{
	return hours;
}
int Time::GetMinutes() const{
	return minute;
}
int Time::GetSeconds() const{
	return seconds;
}
