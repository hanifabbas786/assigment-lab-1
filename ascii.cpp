#include <iostream>
using namespace std;
int main() {
    // Step 1: Input a number
    int inputNumber;
    cout << "Enter a number: ";
    cin >> inputNumber;

    // Step 2: Convert the input number to its corresponding ASCII code
    char asciiCode = static_cast<char>(inputNumber + '0');

    
    cout << "The corresponding ASCII code is: " << asciiCode << endl;

    return 0;
}
