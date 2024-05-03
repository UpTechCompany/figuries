#include "rectangle.h"

double Rectangle::calc_area()
{
	return width * height;
}

double Rectangle::calc_perimetr()
{
	return 2 * (width + height);
}

void Rectangle::name() {
    std::cout << "Rectangle\n";
}
