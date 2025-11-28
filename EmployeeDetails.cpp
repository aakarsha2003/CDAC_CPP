#include <iostream>
using namespace std;

// Structure declaration
struct Employee {
    int employee_id;
    string emp_name;
    string employee_designation;
    string department;
    float salary;
};


void getEmployeeInfo(Employee emp[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "\nEnter details for Employee " << i + 1 << ":\n";

        cout << "Employee ID: ";
        cin >> emp[i].employee_id;

        cout << "Name: ";
        cin >> emp[i].emp_name;

        cout << "Designation: ";
        cin >> emp[i].employee_designation;

        cout << "Department: ";
        cin >> emp[i].department;

        cout << "Salary: ";
        cin >> emp[i].salary;
    }
}


void displayEmployeeInfo(Employee emp[], int size) {
    cout << "\n\n========== Employee Details ==========\n";
    for (int i = 0; i < size; i++) {
        cout << "\nEmployee " << i + 1 << ":\n";
        cout << "ID: " << emp[i].employee_id << endl;
        cout << "Name: " << emp[i].emp_name << endl;
        cout << "Designation: " << emp[i].employee_designation << endl;
        cout << "Department: " << emp[i].department << endl;
        cout << "Salary: " << emp[i].salary << endl;
    }
}


int countSales(Employee emp[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (emp[i].department == "sales" || emp[i].department == "Sales") {
            count++;
        }
    }
    return count;
}


int main() {
    const int SIZE = 2;
    Employee emp[SIZE];

    getEmployeeInfo(emp, SIZE);
    displayEmployeeInfo(emp, SIZE);

    int salesCount = countSales(emp, SIZE);
    cout << "\nNumber of employees in Sales department: " << salesCount << endl;

    return 0;
}
