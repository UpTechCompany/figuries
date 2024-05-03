#include "elips.h"

double Elips::calc_area()
{
	return radius1 * radius2 * 3.1415;
}

double Elips::calc_perimetr()
{
	return 4 * ((3.1415 * radius1 * radius2 + (radius1 - radius2)) / (radius1 + radius2));
}

void Elips::name()
{
	std::cout << "Elips\n";
}
