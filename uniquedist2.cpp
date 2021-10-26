#include <iostream>
#include <vector>
#include <cmath>
#include "Point.h"

//#include "Point.h"
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

int main()
{
    int numOf, x, y, temp;
    bool dupe;
    bool dupe2 = false;
    std::vector <int> vec;
    std::cout << "Enter number of points";
    std::cin >> numOf;
    Point* ar = new Point[numOf];

    for (int i = 0; i < numOf; i++)
    {
        std::cout << "For point "<< i + 1<<": \n";
        std::cout << "Enter x coordinate: ";
        std::cin >> x;
        std::cout << "Enter y coordinate: ";
        std::cin >> y;
        ar[i] = Point(x,y);
    }

    for (int i = 0; i < numOf; i++)
    {
        std::cout << "For point "<< i + 1<<": \n";
        std::cout << "("<< ar[i].getx() << ",";
        std::cout << ar[i].gety() << ")\n";
    }
    for (int i = 0; i < numOf; i++)
    {
        for (int j = i + 1; j < numOf; j++)
        {
            /*std::cout << "("<< ar[i].getx() << ",";
            std::cout << ar[i].gety() << ") and ";
            std::cout << "("<< ar[j].getx() << ",";
            std::cout << ar[j].gety() << ")\n";*/
            temp = pow(ar[i].getx() - ar[j].getx(),2) + pow(ar[i].gety() - ar[j].gety(),2);
            std::cout << temp << std::endl;
            dupe = false;
            //std::cout << (i + j) << "\n";
            for (int l = 0; l < vec.size(); l++)
            {
                if(vec[l] == temp)
                {
                    dupe = true;
                    dupe2 = true;
                }

            }
            if (!dupe)
            {
                vec.push_back(temp);
            }
        }

    }
    if (!dupe2)
        std::cout << "no dupes";
    else
        std::cout << "dupes";
    delete ar;
    return 0;
}
