#ifndef FIGURIES_RECTANGLE_H
#define FIGURIES_RECTANGLE_H

#pragma once
#include "../figure.h"
#include <iostream>

class Rectangle : public Geometric_Figure {

public:
    Rectangle(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4);
    Rectangle(double l, double w);


    double calc_area() override;
	double calc_perimetr() override;
	void name() override;
	
private:
	double width;
	double height;
};

Rectangle::Rectangle(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4) {
    double side1 = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    double side2 = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
    double side3 = sqrt(pow(x4 - x3, 2) + pow(y4 - y3, 2));
    double side4 = sqrt(pow(x1 - x4, 2) + pow(y1 - y4, 2));

    // Проверка на равенство диагоналей и перпендикулярность
    if (side1 == side3 && side2 == side4 && (x1 - x3) * (x2 - x4) + (y1 - y3) * (y2 - y4) == 0) {
        height = std::max(side1, side2);
        width = std::min(side1, side2);
    } else {
        std::cerr << "Неправильные стороны прямоугольника! Такого прямоугольника не существует." << std::endl;
        exit(1);
    }
}

Rectangle::Rectangle(double l, double w) : height(l), width(w) {
    if (height <= 0 || width <= 0) {
        std::cerr << "Неправильные стороны прямоугольника! Такого прямоугольника не существует." << std::endl;
        exit(1);
    }
}

#endif //FIGURIES_RECTANGLE_H