#ifndef FIGURIES_TRIANGLE_H
#define FIGURIES_TRIANGLE_H

#pragma once
#include "../figure.h"
#include <cmath>
#include <iostream>

class Triangle :public Geometric_Figure {
public:
	Triangle(double w1,double w2,double w3);
    Triangle(double x1, double y1, double x2, double y2, double x3, double y3);
	double calc_perimetr() override;
	double calc_area() override;
	void name() override;
private:
	double side1 ;
	double side2 ;
	double side3 ;
    static bool isValid(double s1, double s2, double s3);
};

Triangle::Triangle(double w1,double w2,double w3) {
    if (isValid(w1, w2, w3)) {
        side1 = w1;
        side2 = w2;
        side3 = w3;
    } else {
        std::cerr << "Неправильные стороны треугольника! Такого треугольника не существует." << std::endl;
        exit(1);
    }
}

Triangle::Triangle(double x1, double y1, double x2, double y2, double x3, double y3):
        Triangle((sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2))),
                 (sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2))),
                 (sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2)))) {}
                 
#endif //FIGURIES_TRIANGLE_H
