#include "circle.h"
double Circle::calc_area()
{
	return 3.1415 * radius * radius;;
}

double Circle::calc_perimetr()
{
	return 2 * 3.1415 * radius;
}

void Circle::name()
{
	std::cout << "Circle\n";
}