#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

class Employee {
private:
    std::string name;
    double monthly_salary;
    double tax_percentage;

public:
    void get_data();
    double Salary_after_tax();
    void update_tax_percentage(double new_rate);
    void display_details();
};

#endif