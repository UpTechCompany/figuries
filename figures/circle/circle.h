#ifndef FIGURIES_CIRCLE_H
#define FIGURIES_CIRCLE_H

#pragma once
#include "../figure.h"
#include <iostream>

class Circle :public Geometric_Figure {
public:
    Circle(double x, double y, double r);
	double calc_area() override;
	double calc_perimetr() override;
	void name() override;
private:
	double x, y;
	double radius;
};

Circle::Circle(double x, double y, double r):
    x(x),
    y(y),
    radius(r){}

#endif //FIGURIES_CIRCLE_H