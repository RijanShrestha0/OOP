#include <iostream>

using namespace std;

void celsiusToFahrenheit() {
    double celsius, fahrenheit;
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;
    fahrenheit = (celsius * 9/5) + 32;
    cout << "Temperature in Fahrenheit: " << fahrenheit << endl;
}

void fahrenheitToCelsius() {
    double fahrenheit, celsius;
    cout << "Enter temperature in Fahrenheit: ";
    cin >> fahrenheit;
    celsius = (fahrenheit - 32) * 5/9;
    cout << "Temperature in Celsius: " << celsius << endl;
}

int main() {
    int choice;
    cout << "Temperature Conversion Program" << endl;
    cout << "1. Convert Celsius to Fahrenheit" << endl;
    cout << "2. Convert Fahrenheit to Celsius" << endl;
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;

    switch(choice) {
        case 1:
            celsiusToFahrenheit();
            break;
        case 2:
            fahrenheitToCelsius();
            break;
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}