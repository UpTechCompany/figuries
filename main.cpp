
#include <iostream>
#include "figures/triangle/triangle.h"
#include "figures/rectangle/rectangle.h"
#include "figures/elips/elips.h"
#include "figures/circle/circle.h"
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



}

