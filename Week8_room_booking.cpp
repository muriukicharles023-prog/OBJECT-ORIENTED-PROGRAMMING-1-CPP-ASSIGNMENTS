//Hotel Room Booking System (Constructors and Destructors)

#include <iostream>
#include <string>
using namespace std;

class RoomBooking{
    private:
        string guest_name;
        int room_number;
        int days_booked;

    public:
        //constructor: initializes all attributes
        RoomBooking(string name, int room, int days){
            guest_name = name;
            room_number = room;
            days_booked = days;
            cout<<"Room booking confirmed"<<endl;
        }

        //show booking details
        void displayBooking(){
            cout<<"\n";
            cout<<"BOOKING DETAILS "<<endl;
            cout<<"==================================="<<endl;
            cout<<"Guest name: "<<guest_name<<endl;
            cout<<"Room number: "<<room_number<<endl;
            cout<<"Days booked: "<<days_booked<<endl;
            cout<<"==================================="<<endl;
        }

        //destructor: called when the object is destroyed
        ~RoomBooking(){
            cout<<"Booking ended, room released"<<endl;
        }
};

int main(){
    //create an object of the class
    RoomBooking booking1("John", 204, 3);

    booking1.displayBooking();

    return 0;
}
