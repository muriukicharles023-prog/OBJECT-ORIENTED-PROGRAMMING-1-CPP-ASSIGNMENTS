//Water Billing System Using Functions

#include <iostream>
#include <string>
using namespace std;

//global variables filled in by getCustomerDetails()
string customer_name;
int units_consumed;

//function prototypes
void getCustomerDetails();
float calculateBill(int units);
float applyDiscount(float bill, int units);
void displayBill(float bill, float discount, float final_amount);

int main(){
    float bill, discount, final_amount;

    //function calls in a logical sequence
    getCustomerDetails();
    bill = calculateBill(units_consumed);
    discount = applyDiscount(bill, units_consumed);
    final_amount = bill - discount;
    displayBill(bill, discount, final_amount);

    return 0;
}

//Function definitions
void getCustomerDetails(){
    cout<<"Enter customer name: "<<endl;
    cin>>customer_name;
    cout<<"Enter number of units consumed: "<<endl;
    cin>>units_consumed;
}

float calculateBill(int units){
    float rate_per_unit = 50;
    //Water Bill = Units Consumed x Rate Per Unit
    return units * rate_per_unit;
}

float applyDiscount(float bill, int units){
    float discount;
    //10% discount if the customer uses more than 100 units
    if (units > 100){
        discount = 0.1 * bill;
    }
    else if (units <= 100){
        discount = 0;
    }
    return discount;
}

void displayBill(float bill, float discount, float final_amount){
    cout<<"\n";
    cout<<"WATER BILL "<<endl;
    cout<<"==================================="<<endl;
    cout<<"Customer name: "<<customer_name<<endl;
    cout<<"Units consumed: "<<units_consumed<<endl;
    cout<<"Total bill before discount = Ksh. "<<bill<<endl;
    cout<<"Discount = Ksh. "<<discount<<endl;
    cout<<"Final amount payable = Ksh. "<<final_amount<<endl;
    cout<<"==================================="<<endl;
}
