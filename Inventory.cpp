#include "Inventory.h"
#include "Item.h"
#include <iostream>

bool Inventory::addItem(Item* item){
    if(numberOfItems >= capacity){
        Item** bigger = new Item*[capacity*2];

        for (int i = 0; i < capacity; i++){
            bigger[i] = items[i];
        }

        delete[] items;
        items = bigger;
        capacity *= 2;

        return true;

    } else {
        items[numberOfItems] = item;
        numberOfItems++;
        return true;
    }
}

bool Inventory::removeItem(char id){
    bool deleted = false;
    if (containsItem(id)){
        delete items[id];
        items[id] = nullptr;
        deleted = true;
    }
    
    if (deleted == true){
        items[id - 1] = items[id];
        items[id] = nullptr;
        numberOfItems--;
    }
    return deleted;
}

bool Inventory::containsItem(char id){
    for (int i = 0; i < numberOfItems; i++){
        if (items[i]->getId() == id){
            return true;
        }
    }
    return false;
}

Inventory::Inventory(){
    capacity = 2;
    items = new Item*[capacity];
    numberOfItems = 0;
}

Inventory::~Inventory(){
    for (int i = 0; i < numberOfItems; i++){
        delete items[i];
    }
    delete[] items;
}

std::string Inventory::printInventory(){
    for (int x; x < numberOfItems; x++){
        cout << items[]
    }
}