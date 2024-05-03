//
// Created by Никита Степанов on 03.05.2024.
//

#ifndef FIGURIES_POLYGON_H
#define FIGURIES_POLYGON_H

#pragma once
#include "../figure.h"
#include "../../vector/vector.h"

class Polygon : public Geometric_Figure {
public:
    Polygon(const Vector<std::pair<double, double>>& vertices) : vertices(vertices) {}

    // Метод для добавления вершины
    void addVertex(const std::pair<double, double>& vertex) {
        vertices.push_back(vertex);
    }

    // Метод для вычисления длины отрезка между двумя точками
    double distance(const std::pair<double, double>& p1, const std::pair<double, double>& p2) const {
        return sqrt(pow(p2.first - p1.first, 2) + pow(p2.second - p1.second, 2));
    }

    // Метод для вычисления периметра многоугольника
    double perimeter() const {
        double perimeter = 0;
        for (size_t i = 0; i < vertices.getSize(); ++i) {
            perimeter += distance(vertices[i], vertices[(i + 1) % vertices.getSize()]);
        }
        return perimeter;
    }

    // Метод для вычисления площади многоугольника
    double area() const {
        double area = 0;
        for (size_t i = 0; i < vertices.getSize(); ++i) {
            area += vertices[i].first * vertices[(i + 1) % vertices.getSize()].second -
                    vertices[(i + 1) % vertices.getSize()].first * vertices[i].second;
        }
        return abs(area) / 2.0;
    }
protected:

private:
    Vector<std::pair<double, double>> vertices;
};


#endif //FIGURIES_POLYGON_H
