//Week 4 Task 1: Employee Bonus System (for loop)
#include <iostream>
using namespace std;

int main(){
    //variables to store employee details
    string name;
    float basic;
    float bonus;
    float total;

    //for loop runs 5 times, once for each employee
    for(int i = 1; i <= 5; i++){
        cout<<"Enter details for employee "<<i<<endl;
        cout<<"Name: ";
        cin>>name;
        cout<<"Basic salary: ";
        cin>>basic;

        //Bonus = 0.05 x Basic Salary
        bonus = 0.05 * basic;
        //Total Salary = Basic Salary + Bonus
        total = basic + bonus;

        //report for the employee
        cout<<endl;
        cout<<"EMPLOYEE "<<i<<" REPORT"<<endl;
        cout<<"==================================="<<endl;
        cout<<"Name         : "<<name<<endl;
        cout<<"Basic Salary : Ksh."<<basic<<endl;
        cout<<"Bonus        : Ksh."<<bonus<<endl;
        cout<<"Total Salary : Ksh."<<total<<endl;
        cout<<"==================================="<<endl<<endl;
    }
    return 0;
}
