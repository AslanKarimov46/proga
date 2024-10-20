#include <iostream>
#include <stack>
#include <list>

int main(){
	
	std::stack<int> s;
	s.push(1);
	s.push(56);
	s.pop();
	std::cout<<s.top()<<"\n";			//s.top() the last element of s, also we can't print empty stack
	if(s.empty())
		std::cout<<"empty\n";
	
	//for(int num: s)
	//	std::cout<<num<<" ";			//ERROR
	
	while(!s.empty()){
		std::cout<<s.top()<<" ";
		
	}
	
return 0;	
}
