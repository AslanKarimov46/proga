#include <iostream>
#include <thread>

void foo(int z){
    for(int i=0; i!=z; i++)
        std::cout << "Thred is running\n";
}

class thread_obj{
public:
    
    void operator()(int z){
        for(int i=0; i!=z; i++)
           std::cout << "Thred using read_obj\n";
    }
};

class Base{
public:
    
    void foo(){
        std::cout << "Thred using member function foo()\n";
    }

    static void foo1(){
        std::cout << "Thred using member function foo()\n";
    }
};

int main(){

    std::thread th1(foo, 3);
    std::thread th2(thread_obj(), 3);
    auto f=[](int x){
        for(int i=0; i!=x; i++)
            std::cout << "Thread using lambda\n"; 
    };

    std::thread th3(foo, 3); // <--- here ===   std::thread th3(f,3);
    Base b;
    std::thread th4(&Base::foo, &b);
    std::thread th5(&Base::foo1);
    th1.join();
    th2.join();
    th3.join();
    th4.join();
    th5.join();
    
    return 0;
}