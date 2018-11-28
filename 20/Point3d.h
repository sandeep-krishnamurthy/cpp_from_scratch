#ifndef POINT3D_H
#define POINT3D_H

class Vector3d;

class Point3d {
    private:
        double m_x;
        double m_y;
        double m_z;
    public:
        Point3d(const double x=0.0, const double y=0.0, const double z=0.0);
        void print();
        void moveByVector(const Vector3d &vector);
};

#endif