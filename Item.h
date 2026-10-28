#ifndef ITEM_H
#define ITEM_H
#include <iostream>

using namespace std;

class Item{
    private:
        string id;
        string name;
    public:
        Item(string id = "*", string name = "empty space");
        string getId();
        string getName();
        void setId(string id);
        void setName(string name);
};

#endif