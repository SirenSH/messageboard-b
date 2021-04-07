#ifndef Board_H
#define Board_H

#include <iostream>
#include <string>
#include <map>
#include "Direction.hpp"
using namespace std;
using ariel::Direction;

namespace ariel{

    class Board{
    private:
       map<uint,map<uint,string>> messageBoard;

    public:
        void post(uint row, uint col, Direction direction, string Ad);
        string read(uint row, uint col, Direction direction,uint letters);
        void show();
    };

}
#endif