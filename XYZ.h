#ifndef XYZ_H
#define XYZ_H

#include <wx/dynarray.h>


class XYZ
{
    public:
        double x;
        double y;
        double z;
        XYZ();
        XYZ(const XYZ& point);
        void print() const;

};

WX_DECLARE_OBJARRAY(XYZ, ArrayOfXYZ);

#endif // XYZ_H
