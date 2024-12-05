#include <iostream>
#include <cmath>
using namespace std;
using namespace std;

double area(double a, double b, double c) {
    double s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

double area(double base, double height, bool isBaseHeight) {
    return 0.5 * base * height;
}

int main() {
    double a, b, c, base, height;

    cout << "Enter the sides of the triangle: ";
    cin >> a >> b >> c;
    cout << "Area of the triangle using sides: " << area(a, b, c) << endl;

    cout << "Enter the base and height of the triangle: ";
    cin >> base >> height;
    cout << "Area of the triangle using base and height: " << area(base, height, true) << endl;

    return 0;
}