#include "Room.h"
#include "Player.h"

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
            return true;
        }
    } else if (direction == 'a'){
        if (room->canMove(x-1,y)){
            x--;
            return true;
        }
    } else if (direction == 'd'){
        if (room->canMove(x+1,y)){
            x++;
            return true;
        }
    } else if (direction == 's'){
        if (room->canMove(x,y+1)){
            y++;
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