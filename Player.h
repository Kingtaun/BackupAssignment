#ifndef PLAYER_H
#define PLAYER_H
#include "Room.h"
#include "Inventory.h"

class Room;

class Player{
    private:
        int x;
        int y;
        Inventory inventory;
        void pickupItem(Room* room, int x, int y);

    public:
        Player();
        ~Player();
        bool move(char key, Room * room);
        void printInventory();
        int getX();
        int getY();

};

#endif