//Week 10 Task 1: Payment System (function overloading)
#include <iostream>
using namespace std;

//overloaded processPayment functions: same name, different parameters

//cash payment (amount only)
void processPayment(float amount){
    cout<<"Cash payment"<<endl;
    cout<<"Amount paid: Ksh."<<amount<<endl;
}

//mobile money payment (amount and phone number)
void processPayment(float amount, string phone){
    cout<<"Mobile money payment"<<endl;
    cout<<"Amount paid: Ksh."<<amount<<endl;
    cout<<"Phone number: "<<phone<<endl;
}

//card payment (amount, card number and bank)
void processPayment(float amount, string cardNumber, string bank){
    cout<<"Card payment"<<endl;
    cout<<"Amount paid: Ksh."<<amount<<endl;
    cout<<"Card number: "<<cardNumber<<endl;
    cout<<"Bank: "<<bank<<endl;
}

int main(){
    cout<<"PAYMENT SYSTEM"<<endl;
    cout<<"==================================="<<endl;

    //the compiler picks the function from the number of arguments
    processPayment(1500);
    cout<<"-----------------------------------"<<endl;
    processPayment(2500, "0712345678");
    cout<<"-----------------------------------"<<endl;
    processPayment(5000, "4111222233334444", "Equity");
    return 0;
}
