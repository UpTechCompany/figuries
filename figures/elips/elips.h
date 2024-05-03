#ifndef FIGURIES_ELIPS_H
#define FIGURIES_ELIPS_H

#pragma once
#include "../figure.h"
#include <iostream>

class Elips :public Geometric_Figure {
public:
    Elips();
	Elips(double x, double y, double r, double r2);
	double calc_area() override;
	double calc_perimetr() override;
	void name() override;
private:
	double x, y;
	double radius1, radius2;
};

#endif //FIGURIES_ELIPS_H