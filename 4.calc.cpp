#include <iostream>
#include <cmath>

using namespace std;

double calculateArea(double base, double height) {
    return 0.5 * base * height;
}

double calculatePerimeter(double side1, double side2, double side3) {
    return side1 + side2 + side3;
}

int main() {
    double base, height, side1, side2, side3;

    cout << "Enter the base of the triangle: ";
    cin >> base;

    cout << "Enter the height of the triangle: ";
    cin >> height;

    cout << "Enter the three sides of the triangle: ";
    cin >> side1 >> side2 >> side3;

    double area = calculateArea(base, height);
    double perimeter = calculatePerimeter(side1, side2, side3);

    cout << "The area of the triangle is: " << area << endl;
    cout << "The perimeter of the triangle is: " << perimeter << endl;

    return 0;
}
