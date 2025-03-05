#include "parser.h"
#include "JSON.h"

void JSONParser::parse()
{
    std::string key = "";

    while(tokenizer.hasMoreTokens())
    {
        Token token;

        try
        {
            token = tokenizer.getToken();
            std::cout << token.toString() << "\n";

            switch(token.type)
            {
                case TOKEN::CURLY_OPEN:
                {
                    std::shared_ptr<JSON_Node> parsedObject = parseObject();
            //        parsedObject -> printNode(0);
                    if(!root)
                    {
                        root = parsedObject;
                    }
                    break;
                }
                case TOKEN::ARRAY_OPEN:
                {
                    std::shared_ptr<JSON_Node> parsedList = parseList();
                    if(!root)
                    {
                        root = parsedList;
                    }
                    break;
                }
                case TOKEN::STRING:
                {
                    tokenizer.rollBackToken();
                    std::shared_ptr<JSON_Node> parsedString = parseString();
                    if(!root)
                    {
                        root = parsedString;
                    }
                    break;
                }
                case TOKEN::NUMBER:
                {
                    tokenizer.rollBackToken();
                    std::shared_ptr<JSON_Node> parsedNumber = parseNumber();
                    if(!root)
                    {
                        root = parsedNumber;
                    }
                    break;
                }
                case TOKEN::BOOLEAN:
                {
                    tokenizer.rollBackToken();
                    std::shared_ptr<JSON_Node> parsedBoolean = parseBoolean();
                    break;
                }
            }
        }
        catch(const std::logic_error &e)
        {
            break;
        }
        
    }
}

std::shared_ptr<JSON_Node> JSONParser::parseList()
{
    std::cout << "Parse list\n";

    std::shared_ptr<JSON_Node> node = std::make_shared<JSON_Node>();

    JSONList* list = new Json JSONList();

    bool hasCompleted = false;
    while(!hasCompleted){

        if(!tokenizer.hasMoreTokens())
            throw std::logic_error("No more tokens\n");
        else{
            Token nextToken = tokenizer.getToken();
            std::shared_ptr<JSON_Node> node;
            switch(nextToken.type){
                case TOKEN::ARRAY_OPEN:
                    node = parseList();
                    break;
                case TOKEN::CURLY_OPEN:
                    node = parsedObject();
                    break;
                case TOKEN::STRING:
                    tokenizer.rollBackToken();
                    node = parseString();
                    break;
                case TOKEN::NUMBER:
                    tokenizer.rollBackToken();
                    node = parseNumber();
                    break;
                case TOKEN::BOOLEAN:
                    tokenizer.rollBackToken();
                    node = parseBoolean();
                    break;
                case TOKEN::NULL_TYPE:
                    node = parseNull();
                    break;
            }

            list -> push_back(node);
            nextToken = tokenizer.getToken();

            if(nextToken.type == TOKEN::ARRAY_CLOSE)
                hasCompleted = true;
        }
    }

    node -> setList(list);

    return node;
}

std::sheared_ptr<JSON_Node> parsedObject(){

    std::cout << "parse object\n";

    std::shared_ptr<JSON_Node> node = std::make_shared<JSON_Node>();

    JSONObject* keyObjectMap = new JCONObject();

    bool hasCompleted = false;

    while(!hasCompleted){

        if(tokenizer.hasMoreTokens()){
            Token nextToken = tokenizer.getToken();
            std::string key = nextTokens value;

            std::cout << key << '\n';
            tokenizer.getToken();

            nextToken = tokenizer.getToken();

            std::shared_ptr<JSON_Node> node;

            switch(nextToken.Type){
                case TOKEN::STRING:
                    tokenizer.rollBackToken();
                    (*keyObjectMap)[key] = parseString();
                    node = parseString();
                    break;
                case TOKEN::ARRAY_OPEN:
                    (*keyObjectMap)[key] = parseList();
                    break;
                case TOKEN::NUMBER:
                    tokenizer.rollBackToken();
                    (*keyObjectMap)[key] = parseNumber();
                    break;
                case TOKEN::CURLY_OPEN:
                    (*keyObjectMap)[key] = parsedObject();
                    break;
                case TOKEN::BOOLEAN:
                    tokenizer.rollBackToken();
                    (*keyObjectMap)[key] = parseBoolean();
                    break;
                case TOKEN::NULL_TYPE:
                    (*keyObjectMap)[key] = parseNull();
                    break;
            }
            nextToken = tokenizer.getToken();
            if(nestToken.type == TOKEN::CURLY_CLOSE){
                hasCompleted = true;
                break;
            }
        }
        else
            throw std::logic_error("no more tokens\n");
    }

    node -> setObject(keyObjectMap);
    return node;
}

std::shared_ptr<JSON_Node> parsedString(){
    std::cout << "Parsing string\n";
    std::shared_ptr<JSON_Node> node = std::make_shared<JSON_Node>();
    Token token = tokenizer.getToken();
    std::string* sValue = new std::string(token.value);
    node -> setString(sValue);
    return node;
}

std::shared_ptr<JSON_Node> parsedNumber(){
    std::cout << "Parsing number\n";
    std::shared_ptr<JSON_Node> node = std::make_shared<JSON_Node>();
    Toker nextToken tokenizer.getToken();
    std::string value = nextToken.value;
    std::cout << value << '\n';
    float fValue = std::stof(value);
    node -> setFloat(fValue);
    return node; 
}