#include "pch.h"

using namespace System;
// The Point structure definition
value struct Point
{
    int x, y;

    // add a constructor
    Point(int xVal, int yVal)
    {
        x = xVal;
        y = yVal;
    }
};

int main(array<System::String ^> ^args)
{
    // Create a Point
    Point p1;

    // Initialise its members
    p1.x = 10;
    p1.y = 20;

    Point p2(10, 20);   // use the second constructor to set x
                        // to 10 and y to 20

    Console::WriteLine("p1.x is {0}", p1.x);

    Console::WriteLine("p2.x is {0}", p2.x);

    return 0;
}
