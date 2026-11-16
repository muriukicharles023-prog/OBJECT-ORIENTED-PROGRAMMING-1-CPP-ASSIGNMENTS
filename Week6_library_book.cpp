//Library Book Management System (Classes and Objects)

#include <iostream>
#include <string>
using namespace std;

class Book{
    private:
        string title;
        string author;
        int copies_available;

    public:
        //input book details
        void inputDetails(){
            cout<<"Enter book title: "<<endl;
            cin>>title;
            cout<<"Enter author: "<<endl;
            cin>>author;
            cout<<"Enter number of copies available: "<<endl;
            cin>>copies_available;
        }

        //reduce the number of copies when a book is borrowed
        void borrowBook(){
            if (copies_available > 0){
                copies_available = copies_available - 1;
                cout<<"Book borrowed successfully"<<endl;
            }
            else{
                cout<<"Sorry, no copies available"<<endl;
            }
        }

        //display book information
        void displayDetails(){
            cout<<"\n";
            cout<<"BOOK DETAILS "<<endl;
            cout<<"==================================="<<endl;
            cout<<"Title: "<<title<<endl;
            cout<<"Author: "<<author<<endl;
            cout<<"Copies available: "<<copies_available<<endl;
            cout<<"==================================="<<endl;
        }
};

int main(){
    //create an object of the class
    Book book1;

    book1.inputDetails();
    book1.borrowBook();
    book1.displayDetails();

    return 0;
}
