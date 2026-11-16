//Week 4 Task 2: Savings Withdrawal System (while loop)
#include <iostream>
using namespace std;

int main(){
    float balance;
    float amount;

    cout<<"Enter account balance: Ksh.";
    cin>>balance;

    cout<<"Enter amount to withdraw: Ksh.";
    cin>>amount;

    //loop continues as long as the withdrawal is not more than the balance and the balance is not zero
    while(amount <= balance && balance > 0){
        //deduct the amount from the balance
        balance = balance - amount;
        cout<<"Withdrawal successful"<<endl;
        cout<<"Remaining balance: Ksh."<<balance<<endl;

        //stop when balance becomes zero
        if(balance == 0){
            cout<<"Balance is zero. Transaction ended."<<endl;
        }
        else{
            cout<<"Enter amount to withdraw: Ksh.";
            cin>>amount;
        }
    }

    //loop ended because amount was greater than balance
    if(balance > 0){
        cout<<"Insufficient balance. Withdrawal of Ksh."<<amount<<" is more than Ksh."<<balance<<endl;
    }
    return 0;
}
