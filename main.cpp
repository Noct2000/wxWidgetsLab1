#include <wx/wx.h>
#include "wxPoints.h"
#include <iostream>

void checkPoints(wxPoints& points);
void checkClearPoints(wxPoints& points);

int main()
{

    wxPoints points;
    std::cout << "Create points (1.2, 2.3, 3.4), (1, 2, 3), (0.1, 0.2, 0.3)" << std::endl;
    points.addPoint(1.2, 2.3, 3.4);
    points.addPoint(1, 2, 3);
    points.addPoint(0.1, 0.2, 0.3);
    checkPoints(points);
    std::cout << "//////////////////" << std::endl;
    std::cout << "Clone points array" << std::endl;
    std::cout << "Repeat operation with copy" << std::endl;
    wxPoints *pCopyOfPoints = new wxPoints(points);
    checkPoints(*pCopyOfPoints);
    std::cout << "Clear original" << std::endl;
    checkClearPoints(points);
    std::cout << "Clear copy" << std::endl;
    checkClearPoints(*pCopyOfPoints);

    return 0;
}

void checkPoints(wxPoints& points)
{
    std::cout << "Get count of points" << std::endl;
    std::cout << points.count() << std::endl;
    std::cout << "Print all points" << std::endl;
    points.print();
    std::cout << "Get point by index 1" << std::endl;
    points.getPoint(1).print();
    std::cout << "Get same point point by operator[]" << std::endl;
    points[1].print();
}

void checkClearPoints(wxPoints& points)
{
    std::cout << "Clear points" << std::endl;
    points.clear();
    std::cout << "Get count of points" << std::endl;
    std::cout << points.count() << std::endl;

}
