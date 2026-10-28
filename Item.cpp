#include "Item.h"

Item::Item(string id = "*", string name = "empty space"){
    this->id = id;
    this->name = name;
}

string Item::getId(){
    return id;
}

string Item::getName(){
    return name;
}

void Item::setId(string id){
    this->id = id;
}

void Item::setName(string name){
    this->name = name;
}