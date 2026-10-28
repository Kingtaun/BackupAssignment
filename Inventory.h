#ifndef INVENTORY_H
#define INVENTORY_H
#include "Item.h"

using namespace std;

class Inventory{
    private:
        Item * items;
        int numberOfItems;
        int size;

    public:
        bool addItem(Item item);
        bool removeItem(string id);
        bool containsItem(string id);
        Inventory();
        ~Inventory();
};

#endif