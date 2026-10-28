#ifndef ROOM_H
#define ROOM_H

class Player;

class Room{

    private: 
        Player * player;
        int width;
        int height;
        char ** map;

    public:
        Room(int x, int y, Player * player);
        ~Room();
        void draw();
        //char tileAt(int x, int y);
        bool canMove(int x, int y);
};

#endif