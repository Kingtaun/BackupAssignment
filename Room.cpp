#include "Room.h"
#include "Player.h"
#include <iostream>

using namespace std;

    Room::Room(int x, int y, Player * player){
        this->player = player;

        this->width = x;
        this->height = y;

        this->map = new char*[y];

        for (int i = 0; i < y; i++){
            this->map[i] = new char[x];

            for (int j = 0; j < x; j++){
                if (i == 0 || i == (y-1) || j == 0 || j == (x-1)){
                    this->map[i][j] = '#';
                } else {
                    this->map[i][j] = ' ';
                }
            }
        }

        for (int i = 0; i < (x+y)/2; i++){
            map[rand() % y+1][rand() % x+1] = '#';
        }
    }

    Room::~Room(){

    }

    void Room::draw(){
        for (int i = 0; i < height; i++){
            for (int j = 0; j < width; j++){
                if(player->getY() == i && player->getX() == j){
                    cout << "@";
                } else {
                    cout << map[i][j];
                }
            }
            cout << endl;
        }
    }

    bool Room::canMove(int x, int y){
        return map[y][x] == ' ';
    }