#include <iostream>
#include <string>

using namespace std;

class Employee {
private:
    string name;
    double monthly_salary;
    double tax_percentage;

public:
   
    void get_data() {
        cout << "--- Employee Data Entry ---" << endl;
        cout << "Enter Name: ";
        getline(cin, name); 
        
        cout << "Enter Monthly Salary: ";
        cin >> monthly_salary;
        
        
        tax_percentage = 2.0; 
        cout << "\n[System Info] Standard 2% tax has been applied automatically." << endl;
    }

  
    double Salary_after_tax() {
        double tax_amount = monthly_salary * (tax_percentage / 100.0);
        return monthly_salary - tax_amount;
    }

   
    void update_tax_percentage(double new_rate) {
        tax_percentage = new_rate;
    }

    
    void display_details() {
        cout << "\n--- Final Pay Slip ---" << endl;
        cout << "Employee:       " << name << endl;
        cout << "Gross Salary:   " << monthly_salary << endl;
        cout << "Tax Percentage: " << tax_percentage << "%" << endl;
        cout << "Net Salary:     " << Salary_after_tax() << endl;
        cout << "----------------------" << endl;
    }
};

int main() {
    Employee emp;
    char choice;

    
    emp.get_data();

    
    cout << "Current Net Salary (after 2%): " << emp.Salary_after_tax() << endl;

    
    cout << "\nHas tax % increase the tax percentage? (y/n): ";
    cin >> choice;

   
    if (choice == 'y' || choice == 'Y') {
        double new_tax;
        cout << "Enter the new (higher) tax percentage: ";
        cin >> new_tax;
        
        emp.update_tax_percentage(new_tax);
        emp.display_details();
    } 
    else {
       
        emp.display_details();
    }

    return 0;
}