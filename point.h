#include <iostream>
#include <fstream>
#include <ctime>
#include <cstdlib>
#pragma once

class Point {
private:
    double x;
    double y;

public:
    // Constructeurs
    Point();                         // origine
    Point(double x, double y);       // avec paramètres
    Point(const Point& p);           // recopie

    // Accesseurs
    double getX() const;
    double getY() const;

    // Mutateurs
    void setX(double x);
    void setY(double y);

    // Méthodes
    void translater(const Point& p);
    void translater(double dx, double dy);
};