#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x1, y1, x2, y2;
    std::cout << "Enter the x and y coordinates for the first point (x1 y1): ";
    cin >> x1 >> y1;
    cout << "Enter the x and y coordinates for the second point (x2 y2): ";
    cin >> x2 >> y2;

    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    cout << "The distance between the two points is: " << distance <<endl;

    return 0;
}
