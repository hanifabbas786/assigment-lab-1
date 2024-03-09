#include <iostream>
using namespace std;

int main() {
    int fiveDigitNumber, number, sum = 0;
    cout << "Enter a five-digit number: ";
    cin >> fiveDigitNumber;
    
    number = fiveDigitNumber; 
    
    while (number > 0) {
        int digit = number % 10; 
        sum += digit; // Add the digit to the sum
        number = number / 10; 
    }
    
    cout << "The sum of the digits of " << fiveDigitNumber << " is: " << sum;
    
    return 0;
}





