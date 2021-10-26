#include "Point.h"
Point::Point()
:x(0),y(0)
{}

Point::Point(int cordx, int cordy)
:x(cordx),y(cordy)
{}

int Point::getx() const
{
    return x;
}

int Point::gety() const
{
    return y;
}
