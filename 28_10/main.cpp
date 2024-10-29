#include <string>
#include <iostream>
#include <vector>

/*class Cat{
private:
	std::string name;
	
public:
	Cat(const std::string& n): name(n){}
	const std::string& GetName() const{
		return name;
	}
	std::string Voice() const{
		return "Meow";
	}
};

class Dog{
private:
	std::string name;
	
public:
	Dog(const std::string& n): name(n){}
	const std::string& GetName() const{
		return name;
	}
	std::string Voice() const{
		return "Woof";
	}
};*/

/*enum class AnimalType{
	Cat,
	Dog
};

class Animal{
private:
	AnimalType type;
	std::string name;
public:
	Animal(AnimalType t, const std::string& n): type(t), name(n){}
	const std::string& GetName() const{
		return name;
	}
	std::string Voice() const{
		if(type==AnimalType::Dog)
			return "Woof";
		else if(type==AnimalType::Cat)
			return "Meow";
		else
			return "Unknown Creature";
	}
		
};

template <typename T>
void Process(const T& creature){
	std::cout<<creature.GetName()<<"\n";
}*/

class Animal{
protected:
	std::string name;
public:
	Animal(const std::string& n): name(n){}
	const std::string& GetName() const{
		return name;
	}	
	virtual std::string Voice() const=0;		//теперь можно присвоить только с помощью наследования 
		//{return "Generic Voice";}
	virtual ~Animal() {}
};

class Cat:public Animal{
public:
	Cat(const std::string& n): Animal(n){}
	std::string Voice() const override{
		return "Meow";
	}
};

class Dog:public Animal{
public:
	Dog(const std::string& n): Animal(n){}
	std::string Voice() const override{
		return "Woof";
	}
};

void Process(const Animal& creature){
	std::cout<<creature.Voice()<<"\n";
}

int main(){
	
	std::vector<Animal*> zoo;
	zoo.push_back(new Cat("Vasya"));
	zoo.push_back(new Dog("Sharik"));
	Process(*zoo[0]);
	
	for(Animal* animal:zoo)
		delete animal;
	
return 0;	
}














