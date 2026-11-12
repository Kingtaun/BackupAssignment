#include "Room.h"
#include "Player.h"
#include "Inventory.h"

Player::Player(){
    this->x = 3;
    this->y = 3;
}

Player::~Player(){

}

bool Player::move(char direction, Room * room){
    if (direction == 'w'){
        if (room->canMove(x,y-1)){
            y--;
            if (room->tileAt(x,y) != ' ' && room->tileAt(x,y) != '#'){
                pickupItem(room,x,y);
            }
            return true;
        }
    } else if (direction == 'a'){
        if (room->canMove(x-1,y)){
            x--;
            if (room->tileAt(x,y) != ' ' && room->tileAt(x,y) != '#'){
                pickupItem(room,x,y);
            }
            return true;
        }
    } else if (direction == 'd'){
        if (room->canMove(x+1,y)){
            x++;
            if (room->tileAt(x,y) != ' ' && room->tileAt(x,y) != '#'){
                pickupItem(room,x,y);
            }
            return true;
        }
    } else if (direction == 's'){
        if (room->canMove(x,y+1)){
            y++;
            if (room->tileAt(x,y) != ' ' && room->tileAt(x,y) != '#'){
                pickupItem(room,x,y);
            }
            return true;
        }
    }
    return false;
}

int Player::getX(){
    return x;
}

int Player::getY(){
    return y;
}

void Player::pickupItem(Room* r, int x, int y){
    Item itemFromMap = r->takeItem(x,y);
    Item* item = new Item(itemFromMap.getId(), itemFromMap.getName());
    inventory.addItem(item);
    r->clearTile(x,y);
    
}

void Player::printInventory(){
    inventory.printInventory();
}