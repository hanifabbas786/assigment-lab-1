#include <iostream>
#include <cmath>

using namespace std;

int main()
 {
    const double PI = 3.14;
    double radius;

    // Input the radius from the user
    cout << "Enter the radius of the sphere: ";
    cin >> radius;

    // Calculate volume and surface area
     double volume = (4.0/ 3.0) * PI * pow(radius, 3);
    double surfaceArea = 4 * PI * pow(radius, 2);

    // Display the results
    cout << "Volume of the sphere: " << volume << endl;
    cout << "Surface area of the sphere: " << surfaceArea << endl;

    return 0;

