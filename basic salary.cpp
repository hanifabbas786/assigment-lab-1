#include <iostream>
using namespace std;

int main()
 {
    float basicSalary, dearnessAllowance, houseRent, grossSalary;

    // Input the basic salary
    cout << "Enter the basic salary: ";
    cin >> basicSalary;

    // Calculate dearness allowance (35% of basic salary)
    dearnessAllowance = 0.35 * basicSalary;

    // Calculate house rent (25% of basic salary)
    houseRent = 0.25 * basicSalary;

    // Calculate gross salary
    grossSalary = basicSalary + dearnessAllowance + houseRent;

    // Display the gross salary
    cout << "Gross Salary = " << grossSalary << endl;

    return 0;
}


