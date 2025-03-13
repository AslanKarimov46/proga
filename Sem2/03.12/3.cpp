#include <iostream>
#include <vector>
#include <cstdlib>

long long int normalSum(std::vector<int>& randElements){
    long long int result = 0;
    for(int i: randElements)
        result+=i;

    return result;
}

std::vector<int> randElements(int size){
    std::vector<int> res;
    for(int i=0; i!=size; i++){
        res.push_back(rand()%10);
    }
    return res;
}

long long int Sum1(const std::vector<int>& vec){
    long long int res = 0;
    for(int i=0; i!=50'000; i++){
        res+=i
    }
}

int main(){

    for(int i: randElements(30))
        std::cout << i << ' ';
    std::cout << '\n';

    return 0;
}