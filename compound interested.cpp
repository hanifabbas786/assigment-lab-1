#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double principal, rate, time, compoundInterest;

    
    cout << "Enter principal amount: ";
    cin >> principal;
    cout << "Enter rate of interest (in percentage): ";
    cin >> rate;
    cout << "Enter total time (in years): ";
    cin >> time;
    rate = rate / 100;

    // Calculate compound interest
    compoundInterest = principal * pow((1 + rate), time);

    
    cout << "Compound Interest: " << compoundInterest - principal << endl;

    return 0;
}
