#include "point.h"

int main(void){
    Point p1 = Point(3,4);
    

   Point p2 = Point(7,7);

    std::cout<<p1<<std::endl;

    p1 += p2;
    std::cout<< p1<<std::endl;




}