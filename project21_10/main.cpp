#include <iostream>
#include <list>

class Logger {
private:
    inline static int counter=0;
    const int id;
public:
    Lggger():id(++counter) {
        std::cout<<"Logger():"<<id<<"\n";
    }
    Logger() {
        std::cout<<"Logger():"<<id<<"\n";
    }
    Logger(int x) {
        id=x;
        std::cout<<"Logger(int):"<<id<<"\n";
    }
    ~Logger() {
        std::cout<<"~Logger():"<<id<<"\n";
    }
    Logger (const Logger& other) {
        id=other.id;
        std::cout<<"Logger(copy)"<<"\n";
    }
    Logger& operator=(const Logger& other) {
        id=other.id;
        return *this;
    }

};



int main(){
    /*Logger x1(1);
    {
        Logger x2(2);
    }
    Logger x3(3);*/

    /*Logger* ptr1= new Logger(1);
    Logger* ptr2= new Logger(2);

    delete ptr1;
    delete ptr2;*/

    /*std::list <Logger> loggers(2);
    loggers.pop_front();
    loggers.pop_back();*/

    Logger x1(1);
    Logger x2{x1};

}
