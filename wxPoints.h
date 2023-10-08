#ifndef WX_POINTS_H
#define WX_POINTS_H

#include "XYZ.h"


class wxPoints
{
    public:
        wxPoints();
        virtual ~wxPoints();
        wxPoints(const wxPoints& other);
        int count() const;
        void addPoint(const double x, const double y, const double z);
        const XYZ& getPoint(int index) const;
        const XYZ& operator[](int index) const;
        void clear();
        void print();

    private:
        ArrayOfXYZ arrayOfXYZ;
};

#endif // WX_POINTS_H
