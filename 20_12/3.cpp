#include <iostream>
#include <utility>
#include <memory>

void sendIn(std::unique_ptr<Logger> x){
	
}

int main(){
	
	auto smart=std::make_unique<Logger>();
	
	sendIn(std::move(smart));
	
return 0;	
}
