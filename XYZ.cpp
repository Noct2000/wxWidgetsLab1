#include "XYZ.h"
#include <iostream>

XYZ::XYZ()
{

}

XYZ::XYZ(const XYZ& point)
{
    x = point.x;
    y = point.y;
    z = point.z;
}

void XYZ::print() const
{
    std::cout << "x = " << x << "; "
              << "y = " << y << "; "
              << "z = " << z << "; " << std::endl;

}
