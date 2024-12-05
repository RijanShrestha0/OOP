// WAP to find the volume of the cube, cuboid and cylinder using function overloading and default arguments.

#include <iostream>
#include <cmath>
using namespace std;

double volume(double side) {
    return pow(side, 3);
}
double volume(double length, double breadth, double height) {
    return length * breadth * height;
}
double volume(double radius, double height) {
    return 3.14159 * pow(radius, 2) * height;
}
int main() {
    double side, length, breadth, height, radius;
    cout << "Enter the side of cube: ";
    cin >> side;

    cout << "Enter the length, breadth and height of the cuboid: ";
    cin >> length >> breadth >> height;

    cout << "Enter the radius and height of the cylinder: ";
    cin >> radius >> height;
    
    cout << "Volume of cube: " << volume(side) << endl;
    cout << "Volume of cuboid: " << volume(length, breadth, height) << endl;
    cout << "Volume of cylinder: " << volume(radius, height) << endl;
    return 0;
}