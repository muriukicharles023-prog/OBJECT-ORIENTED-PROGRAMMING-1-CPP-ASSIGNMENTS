//Payroll System Using Functions

#include <iostream>
#include <string>
using namespace std;

//global variables filled in by getEmployeeDetails()
string employee_name;
float basic_salary, overtime_hours;

//function prototypes
void getEmployeeDetails();
float calculateOvertimePay(float hours);
float calculateNetSalary(float salary, float overtime_pay);
void displayPayslip(float overtime_pay, float net_salary);

int main(){
    float overtime_pay, net_salary;

    //function calls in a logical sequence
    getEmployeeDetails();
    overtime_pay = calculateOvertimePay(overtime_hours);
    net_salary = calculateNetSalary(basic_salary, overtime_pay);
    displayPayslip(overtime_pay, net_salary);

    return 0;
}

//Function definitions
void getEmployeeDetails(){
    cout<<"Enter employee name: "<<endl;
    cin>>employee_name;
    cout<<"Enter basic salary: "<<endl;
    cin>>basic_salary;
    cout<<"Enter overtime hours: "<<endl;
    cin>>overtime_hours;
}

float calculateOvertimePay(float hours){
    float rate_per_hour = 500;
    //Overtime Pay = Overtime Hours x Rate Per Hour
    return hours * rate_per_hour;
}

float calculateNetSalary(float salary, float overtime_pay){
    //Net Salary = Basic Salary + Overtime Pay
    return salary + overtime_pay;
}

void displayPayslip(float overtime_pay, float net_salary){
    cout<<"\n";
    cout<<"EMPLOYEE PAYSLIP "<<endl;
    cout<<"==================================="<<endl;
    cout<<"Employee name: "<<employee_name<<endl;
    cout<<"Basic salary = Ksh. "<<basic_salary<<endl;
    cout<<"Overtime hours: "<<overtime_hours<<endl;
    cout<<"Overtime pay = Ksh. "<<overtime_pay<<endl;
    cout<<"Net salary = Ksh. "<<net_salary<<endl;
    cout<<"==================================="<<endl;
}
