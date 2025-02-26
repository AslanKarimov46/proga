#include <iostream>
#include <deque>

void doTrain(std::deque<int>& train, std::string comand, int step){
	if(comand=="+l")
		train.push_front(step);
	else if(comand=="+r")
		train.push_back(step);
	else if(comand=="-l" && !train.empty()){
		for(int i=0; i!=step && !train.empty(); i++)
			train.pop_front();
	}else if(comand=="-r" && !train.empty()){
		for(int i=0; i!=step && !train.empty(); i++)
			train.pop_back();
	}		
}


int main(){
	std::deque<int> train;
	std::string comand;
	int st;

	while(std::cin>>comand>>st){
		doTrain(train, comand, st);
	}

	if(train.empty())
		std::cout<<"empty";
	else{
		for(int i:train)
			std::cout<<i<<" ";		
	}	
		
	std::cout<<"\n";
return 0;	
}







