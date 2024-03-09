#include <iostream>
using namespace std;

int main()
 {
    int a, b, c, temp;

    cout << "Enter the values of a, b, and c: ";
    cin >> a >> b >> c;

    temp = a;
    a = b;
    b = c;
    c = temp;

    cout << "After swapping, the values are:" << endl;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "c: " << c << endl;

    return 0;
}

