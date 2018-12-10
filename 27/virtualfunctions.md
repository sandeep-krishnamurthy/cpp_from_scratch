Create an abstract class named Shape. This class should have three functions: a pure virtual print function that takes and returns a std::ostream, an overloaded operator<< and an empty virtual destructor.

Derive two classes from Shape: a Triangle, and a Circle. The Triangle should have 3 Points as members. The Circle should have one center Point, and an integer radius. Overload the print() function so the following program runs:

```
int main()
{
    Circle c(Point(1, 2, 3), 7);
    std::cout << c << '\n';
 
    Triangle t(Point(1, 2, 3), Point(4, 5, 6), Point(7, 8, 9));
    std::cout << t << '\n';
 
    return 0;
}
```
Here’s a Point class you can use:


```
class Point
{
private:
	int m_x = 0;
	int m_y = 0;
	int m_z = 0;
 
public:
	Point(int x, int y, int z)
		: m_x(x), m_y(y), m_z(z)
	{
 
	}
 
	friend std::ostream& operator<<(std::ostream &out, const Point &p)
	{
		out << "Point(" << p.m_x << ", " << p.m_y << ", " << p.m_z << ")";
		return out;
	}
};
```

Given the above classes (Point, Shape, Circle, and Triangle), finish the following program:

```
#include <vector>
#include <iostream>
 
int main()
{
	std::vector<Shape*> v;
	v.push_back(new Circle(Point(1, 2, 3), 7));
	v.push_back(new Triangle(Point(1, 2, 3), Point(4, 5, 6), Point(7, 8, 9)));
	v.push_back(new Circle(Point(4, 5, 6), 3));
 
	// print each shape in vector v on its own line here
 
       	std::cout << "The largest radius is: " << getLargestRadius(v) << '\n'; // write this function
 
	// delete each element in the vector here
}
```

Hint: You’ll need to add a getRadius() function to Circle, and downcast a Shape* into a Circle* to access it.
