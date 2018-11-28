#include "Vector3d.h"
#include <iostream>

Vector3d::Vector3d(const double x, const double y, const double z)
            : m_x(x), m_y(y), m_z(z) {
}

void Vector3d::print() {
    std::cout << "Vector (" << m_x << ", " << m_y << ", " << m_z << ")\n";
}