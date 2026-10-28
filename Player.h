#ifndef PLAYER_H
#define PLAYER_H
#include "Room.h"

class Room;

class Player{
    private:
        int x;
        int y;

    public:
        Player();
        ~Player();
        bool move(char key, Room * room);
        int getX();
        int getY();

};

#endif