#include <iostream>
using namespace std;



class Circle
{
public:

	Circle();
	Circle(double r);
	void setRadius(double r);
	double getRadius();
	double area();
	double circumference();
	

private:
	double radius;
	const double PI = 3.14159;
	
};


Circle::Circle()
{
	radius = 1;
}

Circle::Circle(double r)
{
	radius = r;
}


void Circle::setRadius(double r)
{

	if (r >= 0)
		radius = r;

}

double Circle::getRadius()
{
	return radius;
}

double Circle::area()
{
	return PI * pow(radius, 2);
}

double Circle::circumference()
{
	return 2 * PI * radius;
}

double Circle::circumference
{
	return 
}

int main()
{

	Circle c1(25);

	cout << "The area of the circle is: " << c1.area();

	cout << "The circumference of the circle is: " << c1.circumference;
	
	return 0;

}