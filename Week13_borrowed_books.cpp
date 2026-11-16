//Week 13 Task 1: Library Borrowed Books (text file, append mode)
#include <iostream>
#include <fstream>
using namespace std;

int main(){
    string student;
    string book;

    cout<<"Enter student name: ";
    cin>>student;
    cout<<"Enter book title: ";
    cin>>book;

    //ios::app adds to the end of the file without erasing old records
    ofstream file("borrowed_books.txt", ios::app);

    if(file.is_open()){
        file<<student<<" "<<book<<endl;
        file.close();
        cout<<"Record saved to borrowed_books.txt"<<endl;
    }
    else{
        cout<<"Error: file could not be opened"<<endl;
    }
    return 0;
}
