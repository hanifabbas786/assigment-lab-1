#include <iostream>
using namespace std;

int main() {
    char letter;
    
    cout << "Enter a letter: ";
    cin >> letter;
    
    // Display the next two letters
    cout << "The next two letters are: " << char(letter + 1) << char(letter + 2) << endl;
    
    return 0;
}
