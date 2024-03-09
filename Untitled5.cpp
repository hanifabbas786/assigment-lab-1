#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, c;

    // Input the sides of the triangle from the user
    cout << "Enter the length of side a: ";
    cin >> a;

    cout << "Enter the length of side b: ";
    cin >> b;

    cout << "Enter the length of side c: ";
    cin >> c;

    // Calculate the semi-perimeter (s)
    double s = (a + b + c) / 2;

    // Calculate the area using Heron's formula
    double area = sqrt(s * (s - a) * (s - b) * (s - c));

    // Display the result
    cout << "Area of the triangle: " << area << endl;

    return 0;
}


