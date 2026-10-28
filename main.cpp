#include <iostream>
#include "Room.h"
#include "Player.h"

int main(){

    Player * player = new Player();

    Room room(30,8,player);
    room.draw();

    while (true){
        char input;
        std::cin >> input;

        player->move(input, &room);
        room.draw();
    }

    return 0;
}
