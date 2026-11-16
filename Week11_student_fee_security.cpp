//Week 11 Task 2: Student Fee Security System (encapsulation)
#include <iostream>
using namespace std;

class Student{
    private:
        string name;
        string admissionNumber;
        float feeBalance;

    public:
        void inputStudentData(){
            cout<<"Enter student name: ";
            cin>>name;
            cout<<"Enter admission number: ";
            cin>>admissionNumber;
            cout<<"Enter fee balance: Ksh.";
            cin>>feeBalance;
        }

        //the balance can only be changed through this function
        void makePayment(){
            float amount;
            cout<<"Enter amount to pay: Ksh.";
            cin>>amount;
            if(amount > 0 && amount <= feeBalance){
                feeBalance = feeBalance - amount;
                cout<<"Payment successful"<<endl;
            }
            else{
                cout<<"Invalid payment amount"<<endl;
            }
        }

        void displayStatus(){
            cout<<endl;
            cout<<"FEE STATUS"<<endl;
            cout<<"==================================="<<endl;
            cout<<"Name             : "<<name<<endl;
            cout<<"Admission Number : "<<admissionNumber<<endl;
            cout<<"Fee Balance      : Ksh."<<feeBalance<<endl;
        }
};

int main(){
    Student student1;
    student1.inputStudentData();
    student1.makePayment();
    student1.displayStatus();
    return 0;
}
