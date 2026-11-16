//Mobile Phone Sales Receipt System

#include <iostream>
#include <string>
using namespace std;

int main(){
    string customer_name, phone_model;
    int quantity;
    float price_per_phone, total_sales;

    //prompt the user to enter the details
    cout<<"Enter customer name: "<<endl;
    cin>>customer_name;
    cout<<"Enter phone model purchased: "<<endl;
    cin>>phone_model;
    cout<<"Enter quantity bought: "<<endl;
    cin>>quantity;
    cout<<"Enter price per phone: "<<endl;
    cin>>price_per_phone;

    //Total Sales Amount = Quantity Bought x Price Per Phone
    total_sales = quantity * price_per_phone;

    cout<<"\n";
    cout<<"MOBILE PHONE SALES RECEIPT "<<endl;
    cout<<"==================================="<<endl;
    cout<<"Customer name: "<<customer_name<<endl;
    cout<<"Phone model: "<<phone_model<<endl;
    cout<<"Quantity bought: "<<quantity<<endl;
    cout<<"Price per phone: Ksh. "<<price_per_phone<<endl;
    cout<<"Total sales amount: Ksh. "<<total_sales<<endl;
    cout<<"==================================="<<endl;

    return 0;
}
