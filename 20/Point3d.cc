#include "Point3d.h"
#include "Vector3d.h"
#include <iostream>

Point3d::Point3d(const double x, const double y, const double z) 
    : m_x(x), m_y(y), m_z(z) {
}

void Point3d::print() {
    std::cout << "Point (" << m_x << ", " << m_y << ", " << m_z << ")\n";
}

void Point3d::moveByVector(const Vector3d &vector) {
    this->m_x += vector.m_x;
    this->m_y += vector.m_y;
    this->m_z += vector.m_z;
}