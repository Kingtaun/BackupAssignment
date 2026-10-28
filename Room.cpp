#include "Room.h"
#include <iostream>

using namespace std;

    Room::Room(int x, int y){

        this->width = x;
        this->height = y;

        this->map = new char[x][y];

        for (int i = 0; i < y; i++){
            this->map[i] = new char[x];

            for (int j = 0; j < x; j++){
                if (i = 0|| i == (y-1) || j == 0 || j == (x-1)){
                    this->map[i][j] = '#';
                } else {
                    this->map[i][j] = ' ';
                }
            }
        }
    }

    Room::~Room(){

    }

    void Room::draw(){
        for (int i = 0; i < height; i++){
            for (int j = 0; j < width; j++){
                cout << this->map[i][j];
            }
        }
    }