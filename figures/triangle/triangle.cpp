#include "triangle.h"

double Triangle::calc_perimetr()
{
	return side1 + side2 + side3;
}

double Triangle::calc_area()
{
	double half_of_perimetr = calc_perimetr() / 2;
	return 	sqrt(half_of_perimetr * (half_of_perimetr - side1) * (half_of_perimetr - side2) * (half_of_perimetr - side3));
}

void Triangle::name()
{
	std::cout << "Triangle\n";

}

bool Triangle::isValid(double s1, double s2, double s3) {
    return (s1 + s2 > s3 && s2 + s3 > s1 && s1 + s3 > s2);
}
