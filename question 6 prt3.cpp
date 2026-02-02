#include <iostream>
#include "Employee.h"

using namespace std;

int main() {
    Employee emp1, emp2, emp3;
    char choice;

    emp1.get_data();
    cout << "Increase tax for Employee 1? (y/n): ";
    cin >> choice;
    if (choice == 'y' || choice == 'Y') {
        double rate;
        cout << "Enter new rate: ";
        cin >> rate;
        emp1.update_tax_percentage(rate);
    }

    emp2.get_data();
    cout << "Increase tax for Employee 2? (y/n): ";
    cin >> choice;
    if (choice == 'y' || choice == 'Y') {
        double rate;
        cout << "Enter new rate: ";
        cin >> rate;
        emp2.update_tax_percentage(rate);
    }

    emp3.get_data();
    cout << "Increase tax for Employee 3? (y/n): ";
    cin >> choice;
    if (choice == 'y' || choice == 'Y') {
        double rate;
        cout << "Enter new rate: ";
        cin >> rate;
        emp3.update_tax_percentage(rate);
    }

    emp1.display_details();
    emp2.display_details();
    emp3.display_details();

    return 0;
}