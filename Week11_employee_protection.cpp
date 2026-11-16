//Week 11 Task 1: Employee Data Protection System (encapsulation)
#include <iostream>
using namespace std;

class Employee{
    //data hiding: private members
    private:
        string name;
        int id;
        float basicSalary;

    public:
        //setter
        void setEmployeeDetails(){
            cout<<"Enter employee name: ";
            cin>>name;
            cout<<"Enter employee ID: ";
            cin>>id;
            cout<<"Enter basic salary: Ksh.";
            cin>>basicSalary;
        }

        //net salary = basic + 10% of basic
        float calculateSalary(){
            float net = basicSalary + 0.10 * basicSalary;
            return net;
        }

        void displayEmployeeDetails(){
            cout<<endl;
            cout<<"EMPLOYEE DETAILS"<<endl;
            cout<<"==================================="<<endl;
            cout<<"Name         : "<<name<<endl;
            cout<<"ID           : "<<id<<endl;
            cout<<"Basic Salary : Ksh."<<basicSalary<<endl;
            cout<<"Net Salary   : Ksh."<<calculateSalary()<<endl;
        }
};

int main(){
    Employee employee1;
    employee1.setEmployeeDetails();
    employee1.displayEmployeeDetails();
    //employee1.basicSalary = 5000; would give an error because it is private
    return 0;
}
