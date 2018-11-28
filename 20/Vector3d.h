#ifndef VECTOR3D_H
#define VECTOR3D_H

#include "Point3d.h"
class Vector3d {
    private:
        double m_x;
        double m_y;
        double m_z;

    public:
        Vector3d(const double x=0.0, const double y=0.0, const double z=0.0);
        void print();
        
        friend void Point3d::moveByVector(const Vector3d &vector);
};
#endif