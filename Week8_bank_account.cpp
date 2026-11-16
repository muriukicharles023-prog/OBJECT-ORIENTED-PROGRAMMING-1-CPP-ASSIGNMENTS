//Bank Account System (Constructors and Destructors)

#include <iostream>
#include <string>
using namespace std;

class BankAccount{
    private:
        string account_holder_name;
        string account_number;
        float account_balance;

    public:
        //constructor: initializes all data members
        BankAccount(string name, string number, float balance){
            account_holder_name = name;
            account_number = number;
            account_balance = balance;
            cout<<"Account successfully created"<<endl;
        }

        //display account details
        void displayAccount(){
            cout<<"\n";
            cout<<"ACCOUNT DETAILS "<<endl;
            cout<<"==================================="<<endl;
            cout<<"Account holder: "<<account_holder_name<<endl;
            cout<<"Account number: "<<account_number<<endl;
            cout<<"Account balance = Ksh. "<<account_balance<<endl;
            cout<<"==================================="<<endl;
        }

        //destructor: called when the object is destroyed
        ~BankAccount(){
            cout<<"Account closed successfully"<<endl;
        }
};

int main(){
    //create an object of the class
    BankAccount account1("Jane", "0012345678", 25000);

    account1.displayAccount();

    return 0;
}
