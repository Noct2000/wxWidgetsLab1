#include "wxPoints.h"
#include <wx/arrimpl.cpp>
#include <iostream>

WX_DEFINE_OBJARRAY(ArrayOfXYZ);

wxPoints::wxPoints()
{
    //ctor
}

wxPoints::~wxPoints()
{
    arrayOfXYZ.Clear();
}

wxPoints::wxPoints(const wxPoints& other)
{
    for (int i = 0; i < other.count(); i++)
    {
        XYZ newPoint(other.getPoint(i));
        arrayOfXYZ.Add(newPoint);
    }
}

int wxPoints::count() const
{
    return (int)arrayOfXYZ.GetCount();
}

void wxPoints::addPoint(const double x, const double y, const double z)
{
    XYZ point;
    point.x = x;
    point.y = y;
    point.z = z;
    arrayOfXYZ.Add(point);
}

const XYZ& wxPoints::getPoint(int index) const
{
    return arrayOfXYZ[index];
}

const XYZ& wxPoints::operator[](int index) const
{
    return arrayOfXYZ[index];
}

void wxPoints::clear()
{
    arrayOfXYZ.Clear();
}

void wxPoints::print()
{
    for (int i = 0; i < count(); i++)
    {
        std::cout << "Point #" << i << std::endl;
        arrayOfXYZ[i].print();
    }
}
