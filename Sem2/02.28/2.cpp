#include <iostream>
#include <string>
#include <memory>
#include <map>
#include <vector>
#include <exception>

class JSON_Node;

using JSONObject = std::map<std::string, std::shared_ptr<JSON_Node>>;
using JSONList = std::vector<std::shared_ptr<JSON_Node>>;

class JSON_Node{
	
	enum class TYPE{
		OBJECT, LIST, STRING,
		NUMBER, BOOLEAN, NULL_TYPE
	};

	union VALUES{
		JSONObject* object;
		JSONList* list;
		std::string* s;
		float fValue;
		bool bValue; 
	} value;
	TYPE type;

	auto returnObject(){
		if(type == TYPE::OBJECT)
			return *value.object;
		throw std::logic_error("Wrong return");
	}

	auto returnList(){
		if(type == TYPE::LIST)
			return *value.list;
		throw std::logic_error("Wrong return");
	}

	auto returnString(){
		if(type == TYPE::STRING)
			return *value.s;
		throw std::logic_error("Wrong return");
	}

	auto returnFloat(){
		if(type == TYPE::NUMBER)
			return value.fValue;
		throw std::logic_error("Wrong return");
	}

	auto returnBloon(){
		if(type  == TYPE::BOOLEAN)
			return value.bValue;
		throw std::logic_error("Wrong return");
	}

	void setObject(JSONObject* object){
		this -> value.object = object;
		type = TYPE::OBJECT;
	}

	void setList(JSONObject* list){
		this -> value.list = list;
		type = TYPE::LIST;
	}

	void setString(JSONObject* s){
		this -> value.s = s;
		type = TYPE::STRING;
	}

	void setFloat(JSONObject fValue){
		this -> value.fValue = fValue;
		type = TYPE::STRING;
	}

};

int main(){



	return 0;
}