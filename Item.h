#ifndef ITEM_H
#define ITEM_H
#include <iostream>

using namespace std;

class Item{
    private:
        char id;
        string name;
    public:
        static std::string getNameFromId(char id);
        Item(char id, string name);
        char getId();
        string getName();
        void setId(char id);
        void setName(string name);
};

#endif