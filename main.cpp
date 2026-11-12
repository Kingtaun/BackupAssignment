#include <iostream>
#include "Room.h"
#include "Player.h"
#include "Item.h"

using namespace std;

int main(){

    srand(time(0));

    Player* player = new Player();

    Room room(30,8,player);
    room.placeItem(new Item('k', "key"), 4, 4);
    room.draw();

    bool isRunning = true;

    while (isRunning){
        char input;
        cin >> input;

        if (input == 'q'){
            isRunning = false;
            
        } else {
            player->move(input, &room);
            room.draw();
            player->printInventory();
        }
    }

    return 0;
}
