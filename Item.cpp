#include "Item.h"

Item::Item(char id, string name){
    this->id = id;
    this->name = name;
}

char Item::getId(){
    return id;
}

string Item::getName(){
    return name;
}

void Item::setId(char id){
    this->id = id;
}

void Item::setName(string name){
    this->name = name;
}

std::string Item::getNameFromId(char id){
    if (id == 'k'){
        return "key";

    } else {
        return "N/A"
    }
}