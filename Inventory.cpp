#include "Inventory.h"

bool Inventory::addItem(Item item){
    if(numberOfItems >= size){
        
    } else {
        items[numberOfItems] = item;
        numberOfItems++;
    }
}

bool Inventory::removeItem(string id){
    numberOfItems--;
}

bool Inventory::containsItem(string id){

}

Inventory::Inventory(){
    size = 2;
    items = new Item[2];
    numberOfItems = 0;
}

Inventory::~Inventory(){
    delete[] items;
}