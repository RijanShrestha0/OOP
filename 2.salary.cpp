#include <iostream>

using namespace std;

int main() {
    double salary, bonus, netSalary;

    cout << "Enter the salary of the employee: ";
    cin >> salary;

    if (salary > 20000 && salary <= 25000) {
        bonus = salary * 0.15;
    } else if (salary <= 20000) {
        bonus = salary * 0.10;
    } else {
        bonus = salary * 0.05;
    }

    netSalary = salary + bonus;

    cout << "The net salary of the employee is: " << netSalary << endl;

    return 0;
}