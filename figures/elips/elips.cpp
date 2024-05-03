#include "elips.h"
#include "cmath"
double Elips::calc_area()
{
	return radius1 * radius2 * M_PI;
}

double Elips::calc_perimetr()
{
	return 4 * ((M_PI * radius1 * radius2 + (radius1 - radius2)) / (radius1 + radius2));
}

void Elips::name()
{
	std::cout << "Elips\n";
}

Elips::Elips(){
    radius1 = radius2 = x = y = 0;
}


Elips::Elips(double x, double y, double r, double r2):
        x(x),
        y(y),
        radius1(r),
        radius2(r2){}
