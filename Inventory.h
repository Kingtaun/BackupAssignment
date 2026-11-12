#ifndef INVENTORY_H
#define INVENTORY_H
#include "Item.h"

using namespace std;

class Inventory{
    private:
        Item** items;
        int numberOfItems;
        int capacity;

    public:
        bool addItem(Item* item);
        bool removeItem(char id);
        bool containsItem(char id);
        Inventory();
        ~Inventory();
        void printInventory();
};

#endif