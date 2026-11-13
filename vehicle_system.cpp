//Vehicle System (Inheritance)

#include <iostream>
#include <string>
using namespace std;

//base class
class Vehicle{
    //protected so that the derived class can access them
    protected:
        string brand;
        int year_of_manufacture;

    public:
        //display vehicle details
        void displayVehicle(){
            cout<<"Brand: "<<brand<<endl;
            cout<<"Year of manufacture: "<<year_of_manufacture<<endl;
        }
};

//derived class
class Car : public Vehicle{
    private:
        int number_of_doors;
        float engine_capacity;

    public:
        //input all the details (brand and year are inherited from Vehicle)
        void inputCar(){
            cout<<"Enter brand: "<<endl;
            cin>>brand;
            cout<<"Enter year of manufacture: "<<endl;
            cin>>year_of_manufacture;
            cout<<"Enter number of doors: "<<endl;
            cin>>number_of_doors;
            cout<<"Enter engine capacity (cc): "<<endl;
            cin>>engine_capacity;
        }

        //display all car details including the inherited attributes
        void displayCar(){
            cout<<"\n";
            cout<<"CAR DETAILS "<<endl;
            cout<<"==================================="<<endl;
            displayVehicle();
            cout<<"Number of doors: "<<number_of_doors<<endl;
            cout<<"Engine capacity: "<<engine_capacity<<" cc"<<endl;
            cout<<"==================================="<<endl;
        }
};

int main(){
    //create an object of the derived class
    Car car1;

    car1.inputCar();
    car1.displayCar();

    return 0;
}
