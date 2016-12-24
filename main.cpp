#include "triangle.h"

int main()
{
    triangle t1 = triangle (3, 3, 3);

    cout << "Perimetr = " << t1.perimetr() << endl;
    cout << "Square = " << t1.square() << endl;

    triangle t2 = triangle (2, 4, 1);

    return 0;
}
