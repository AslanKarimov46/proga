/*https://hetmanrecovery.com/ru/recovery_news/bios-audio-signals.htm*/
#include <iostream>
#include <thread>
#include <mutex>
#include <chrono>

std::timed_mutex tmtx;

void task(int id){

    std::cout << "thread " << id << " tries to aquire lock\n";
    std::unique_lock<std::timed_mutex> lock(tmtx, std::defer_lock);

    if(lock.try_lock_for(std::chrono::seconds(3))){
        std::cout << "thread " << id << " acquired\n";
        std::this_thread::sleep_for(std::chrono::seconds(3));

        std::cout << "thread " << id << " releases lock\n";
    }else{
        std::cout << "thread " << id << " failed to acquired lock\n"; 
    }

}


int main(){

    std::thread t1(task, 1);
    std::this_thread::sleep_for(std::chrono::seconds(1));

    std::thread t2(task, 2);

    t1.join();
    t2.join();

    return 0;
}