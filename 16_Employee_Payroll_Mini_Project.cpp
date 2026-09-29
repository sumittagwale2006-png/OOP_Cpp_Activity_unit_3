// Concept 16: Employee Payroll Mini-Project
// Aim: To build a salary-calculation application using
// abstract classes and run-time polymorphism.

#include <iostream>
#include <string>
#include <vector>
#include <memory>

using namespace std;

// Create abstract Employee class
class Employee
{
protected:
    // Store employee ID
    int employeeId;

    // Store employee name
    string name;

public:
    // Constructor
    Employee(int id, string employeeName)
    {
        employeeId = id;
        name = employeeName;
    }

    // Pure virtual salary calculation function
    virtual double calculateSalary() const = 0;

    // Display basic employee details
    void displayBasicDetails() const
    {
        cout << "Employee ID: " << employeeId << endl;
        cout << "Name: " << name << endl;
    }

    // Virtual destructor
    virtual ~Employee() = default;
};

// Create PermanentEmployee class
class PermanentEmployee : public Employee
{
private:
    // Store basic salary
    double basicSalary;

    // Store allowance
    double allowance;

    // Store tax
    double tax;

public:
    // Constructor
    PermanentEmployee(int id, string employeeName,
                      double basic, double extra, double taxAmount)
        : Employee(id, employeeName)
    {
        basicSalary = basic;
        allowance = extra;
        tax = taxAmount;
    }

    // Calculate permanent employee salary after tax
    double calculateSalary() const override
    {
        return basicSalary + allowance - tax;
    }
};

// Create ContractEmployee class
class ContractEmployee : public Employee
{
private:
    // Store hourly rate
    double hourlyRate;

    // Store hours worked
    int hoursWorked;

public:
    // Constructor
    ContractEmployee(int id, string employeeName,
                     double rate, int hours)
        : Employee(id, employeeName)
    {
        hourlyRate = rate;
        hoursWorked = hours;
    }

    // Calculate contract employee salary
    double calculateSalary() const override
    {
        return hourlyRate * hoursWorked;
    }
};

// Create FreelanceEmployee class
class FreelanceEmployee : public Employee
{
private:
    // Store project payment
    double projectPayment;

public:
    // Constructor
    FreelanceEmployee(int id, string employeeName,
                      double payment)
        : Employee(id, employeeName)
    {
        projectPayment = payment;
    }

    // Calculate freelance salary
    double calculateSalary() const override
    {
        return projectPayment;
    }
};

// Display employee payslip
void printPaySlip(const Employee& employee)
{
    // Display basic details
    employee.displayBasicDetails();

    // Display calculated salary
    cout << "Salary: Rs. "
         << employee.calculateSalary()
         << endl << endl;
}

int main()
{
    // Create vector of polymorphic employee pointers
    vector<unique_ptr<Employee>> employees;

    // Add permanent employee
    employees.push_back(
        make_unique<PermanentEmployee>(
            101, "Asha", 40000.0, 8000.0, 4000.0
        )
    );

    // Add contract employee
    employees.push_back(
        make_unique<ContractEmployee>(
            102, "Vikas", 500.0, 80
        )
    );

    // Add freelance employee
    employees.push_back(
        make_unique<FreelanceEmployee>(
            103, "Rahul", 35000.0
        )
    );

    // Store total payroll
    double totalPayroll = 0.0;

    // Display all payslips
    for (const auto& employee : employees)
    {
        // Print employee payslip
        printPaySlip(*employee);

        // Add salary to total payroll
        totalPayroll += employee->calculateSalary();
    }

    // Display total payroll
    cout << "Total Payroll Amount: Rs. "
         << totalPayroll << endl;

    return 0;
}
