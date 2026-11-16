//Week 4 Task 3: Password Verification System (do-while loop)
#include <iostream>
using namespace std;

int main(){
    //predefined username and password
    string correctUser = "admin";
    string correctPass = "1234";
    string username;
    string password;

    //do-while runs at least once, then repeats until credentials are correct
    do{
        cout<<"Enter username: ";
        cin>>username;
        cout<<"Enter password: ";
        cin>>password;

        if(username == correctUser && password == correctPass){
            cout<<"Access Granted"<<endl;
        }
        else{
            cout<<"Incorrect credentials, try again"<<endl;
        }
    }
    while(username != correctUser || password != correctPass);

    return 0;
}
