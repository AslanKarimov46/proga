#include <iostream>

template <typename T> 
class List { 
private: 
	struct Node { 									// узел двусвязного списка 
		T element; 
		Node* prev = nullptr; 						// предыдущий узел 
		Node* next = nullptr; 						// следующий узел 
	}; 
	Node* first = nullptr;							// первый узел списка 
	Node* last = nullptr; 							// последний узел списка 
	int elementsCount = 0; 
public:
	size_t Size() const{ 
		return elementsCount; 
	}void PushBack(const T& elem){  				// Конструируем в динамической памяти новой узел списка 
	Node* node=new Node(elem, last, nullptr); 		// Связываем новый узел с остальными узлами 
	if(last!=nullptr)
		last->next=node; 
	else 
		first = node;  

		last = node;
		++elementsCount; 
	} 
};

class C{
public:
	void f() noexcept{}; 
};

int main(){
	
	List<C> data;
	C element;
	try{
		data.PushBack(element);
	}catch(...){
		std::cout<<data.Size()<<"\n";
	}
	
return 0;	
}


















