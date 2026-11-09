#ifndef PLAYER_H
#define PLAYER_H
#include "Room.h"
#include "Inventory.h"

class Room;

class Player{
    private:
        int x;
        int y;
        Room * room;
        Inventory inventory;
        void getItem(Room* room, int x, int y);

    public:
        Player();
        ~Player();
        bool move(char key, Room * room);
        std::string printInventory();
        int getX();
        int getY();

};

#endif