#include <iostream>
#include <thread>
#include <chrono>
#include <mutex>
#include <vector>

std::mutex mtx;

void sleep_(int seconds){
    std::this_thread::sleep_for(std::chrono::seconds(seconds));
}

void Xodjasan(int index){
    std::lock_guard<std::mutex> guard(mtx);
    sleep_(3);
    std::cout << "Xodjasan -> " << index << " -> Avtovogzal\n";
}

void Avtovogzal(int index){
    std::lock_guard<std::mutex> guard(mtx);
    sleep_(3);
    std::cout << "Avtovogzal -> " << index << " -> MemarAdjemi\n";
}

void MemarAdjemi(int index){
    std::lock_guard<std::mutex> guard(mtx);
    sleep_(3);
    std::cout << "MemarAdjemi -> " << index << " -> 8Noyabr\n";
}

void Noyabr8(int index){
    std::lock_guard<std::mutex> guard(mtx);
    sleep_(3);
    std::cout << "8Noyabr -> " << index << " -> MemarAdjemi\n";
}

void MemarAdjemi_(int index){
    std::lock_guard<std::mutex> guard(mtx);
    sleep_(3);
    std::cout << "MemarAdjemi -> " << index << " -> Avtovogzal\n";
}

void Avtovogzal_(int index){
    std::lock_guard<std::mutex> guard(mtx);
    sleep_(3);
    std::cout << "Avtovogzal -> " << index << " -> Xodjasan\n";
}

void Dvijeniye_violete(int index){
    for (int i = 0; i < 5; ++i) {
        {
            std::lock_guard<std::mutex> guard(mtx);
            std::cout << "Мужик гуляет\n";
        }
        sleep_(2);
        Xodjasan(index);
        Avtovogzal(index);
        MemarAdjemi(index);
        {
            std::lock_guard<std::mutex> guard(mtx);
            std::cout << "Мужик гуляет и крутится\n";
        }
        sleep_(4);
        Noyabr8(index);
        MemarAdjemi_(index);
        Avtovogzal_(index);
    }
}

int main(){
    std::vector<std::thread> Trains;

    Trains.push_back(std::thread(Dvijeniye_violete, 3));
    sleep_(3);
    Trains.push_back(std::thread(Dvijeniye_violete, 2));

    for (auto& train : Trains) {
        train.join();
    }

    return 0;
}