#include <iostream>
#include <fstream>
#include <ctime>
#include <cstdlib>
#pragma once

class Point{
    private: int x;
             int y;
    public: 
            int getX (){return x;}
            int getY (){return y;}
            void setX(){this->x=x;}
            void setY(){this->y=y;}

            void translater(Point p);
            





}