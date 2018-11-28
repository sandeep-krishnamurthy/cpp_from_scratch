#include "Point3d.h"
#include "Vector3d.h"

int main() {
    Point3d point(1.0, 2.0, 3.0);
    Vector3d vector(2.0, 2.0, -3.0);

    point.print();
    point.moveByVector(vector);
    point.print();

    return 0;
}