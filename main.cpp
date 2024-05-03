
#include <iostream>
#include "figures/triangle/triangle.h"
#include "figures/rectangle/rectangle.h"
#include "figures/elips/elips.h"
#include "figures/circle/circle.h"
//#include "vector/vector.h"
#include "fstream"
#include "figures/polygon/polygon.h"

Vector<std::pair<double, double>> readVerticesFromFile(const std::string& filename) {
    std::ifstream file(filename);
    if (!file.is_open()) {
        std::cerr << "Failed to open file: " << filename << std::endl;
        exit(1);
    }

    size_t numVertices;
    file >> numVertices;

    Vector<std::pair<double, double>> vertices(numVertices);

    for (size_t i = 0; i < numVertices; ++i) {
        double x, y;
        file >> x >> y;
        vertices.push_back(std::make_pair(x, y));
    }

    file.close();

    return vertices;
}

int main()
{
    Triangle t(6,5,2.2);
    t.name();
    std::cout<<"Perimetr: " << t.calc_perimetr() << '\n';
    std::cout << "Area: " << t.calc_area() << '\n';

    std::cout << "\n";

    Triangle t2(0,0,0,5,5,0);
    t2.name();
    std::cout<<"Perimetr: " << t2.calc_perimetr() << '\n';
    std::cout << "Area: " << t2.calc_area() << '\n';

    std::cout << "\n";

    Rectangle r(5, 5);
    r.name();
    std::cout << "Perimetr: " << r.calc_perimetr() << '\n';
    std::cout << "Area: " << r.calc_area() << '\n';

    std::cout << "\n";

    Rectangle r1(0,0, 0, 5, 5, 5, 5, 0);
    r1.name();
    std::cout << "Perimetr: " << r1.calc_perimetr() << '\n';
    std::cout << "Area: " << r1.calc_area() << '\n';

    std::cout << "\n";

    Elips e(1, 1,2,4);
    e.name();
    std::cout << "Perimetr: " << e.calc_perimetr() << '\n';
    std::cout << "Area: " << e.calc_area() << '\n';

    std::cout << "\n";

    Circle c(1, 1, 5);
    c.name();
    std::cout << "Perimetr: " << c.calc_perimetr() << '\n';
    std::cout << "Area: " << c.calc_area() << '\n';

    std::cout << "\n";

    std::string filename = "/Users/nikitastepanov/CLionProjects/figuries/polygon.txt"; // Имя файла с вершинами полигона
    Vector<std::pair<double, double>> vertices = readVerticesFromFile(filename);

    Polygon polygon(vertices);
    polygon.name();
    std::cout << "Perimeter of polygon: " << polygon.calc_perimetr() << std::endl;
    std::cout << "Area of polygon: " << polygon.calc_area() << std::endl;


}

