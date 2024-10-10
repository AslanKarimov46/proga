#ifndef TIME_H
#define TIME_H
#include <iostream>

namespace chron{
	class Time{
	private:
		int Total_Seconds;
		void normalise();
		
	public:
		Time()=default;
		Time(int h, int m, int s);
		Time(int s): Time(0,0,s){}
		int GetHours() const;			//геттеры
		int GetMinutes() const;
		int GetSeconds() const;
		int TotalSeconds() const;
		void AddSeconds(int s);	
		Time& operator+=(int s);

	};
	Time operator+(const Time&t, int s);
	
}
int operator-(const chron::Time& t1, const chron::Time& t2);
std::ostream& operator<<(std::ostream& out, const chron::Time& t);
std::istream& operator>>(std::istream& in,  chron::Time& t);


#endif 
