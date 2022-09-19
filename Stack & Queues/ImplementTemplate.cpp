#include <iostream>
#include "Pair.cpp"
using namespace std;

int main()
{
    // Triplet
    Pair<Pair<int, int>, int> p2;
    p2.setY(10);
    Pair<int, int> p4;
    p4.setX(5);
    p4.setY(12);

    p2.setX(p4);

    cout << p2.getX().getX() << " " << p2.getX().getY() << " " << p2.getY() << endl;

    // Pair<int, double> p1;
    // p1.setX(100);
    // p1.setY(100.34);

    // cout << " p1.X = " << p1.getX() << " p1.Y = " << p1.getY() << endl;

    // Pair<int> p1;
    // Pair<double> p2;
    // Pair<char> p3;
    // p1.setX(10);
    // p1.setY(20);

    // cout << " p1.X = " << p1.getX() << " p1.Y = " << p1.getY() << endl;

    // p2.setX(12.34);
    // p2.setY(25.36);

    // cout << " p2.X = " << p2.getX() << " p2.Y = " << p2.getY() << endl;

    return 0;
}