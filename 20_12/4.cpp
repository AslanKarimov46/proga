#include <iostream>
#include <utility>
#include <memory>

template <typename T>
class FowardList{
private:
	struct Node{
		T data;
		std::unique_ptr<Node> next;
	};
	std::unique_ptr<Node> head;
public:
	void PushFront(const T& element){
		head=std::make_unique<Node>(element, std::move(head));
	}
	void PopFront(){
		head=std::move(head->next);
	}
	const T& Front() const{
		return head->data;
	}
	bool Empty() const{
		return head==nullptr;
	}
	~ForwardList(){
		while(!Empty()){
			PopFront();
		}
	}
}

int main(){
	
	

	return 0;
}
