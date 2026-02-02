#include <iostream>
#include <string>
#include <limits>
#include "Employee.h"

using namespace std;

void Employee::get_data() {
    cout << "--- Employee Data Entry ---" << endl;
    cout << "Enter Name: ";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    getline(cin, name);
    
    cout << "Enter Monthly Salary: ";
    cin >> monthly_salary;
    
    tax_percentage = 2.0;
    cout << "[System] Standard 2% tax applied to " << name << "." << endl;
}

double Employee::Salary_after_tax() {
    return monthly_salary - (monthly_salary * (tax_percentage / 100.0));
}

void Employee::update_tax_percentage(double new_rate) {
    tax_percentage = new_rate;
}

void Employee::display_details() {
    cout << "\n===============================" << endl;
    cout << "       OFFICIAL RECEIPT        " << endl;
    cout << "===============================" << endl;
    cout << "Employee Name:   " << name << endl;
    cout << "Gross Salary:    $" << monthly_salary << endl;
    cout << "Applied Tax:     " << tax_percentage << "%" << endl;
    cout << "NET PAY:         $" << Salary_after_tax() << endl;
    cout << "===============================" << endl;
}