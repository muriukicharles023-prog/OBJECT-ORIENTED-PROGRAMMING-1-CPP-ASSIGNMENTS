//School Management System (Inheritance)

#include <iostream>
#include <string>
using namespace std;

//base class
class Person{
    //protected so that the derived class can access them
    protected:
        string name;
        int age;

    public:
        //display name and age
        void displayPerson(){
            cout<<"Name: "<<name<<endl;
            cout<<"Age: "<<age<<endl;
        }
};

//derived class
class Student : public Person{
    private:
        string admission_number;
        string class_name;

    public:
        //input all the details (name and age are inherited from Person)
        void inputStudent(){
            cout<<"Enter name: "<<endl;
            cin>>name;
            cout<<"Enter age: "<<endl;
            cin>>age;
            cout<<"Enter admission number: "<<endl;
            cin>>admission_number;
            cout<<"Enter class: "<<endl;
            cin>>class_name;
        }

        //display student details together with the inherited details
        void displayStudent(){
            cout<<"\n";
            cout<<"STUDENT DETAILS "<<endl;
            cout<<"==================================="<<endl;
            displayPerson();
            cout<<"Admission number: "<<admission_number<<endl;
            cout<<"Class: "<<class_name<<endl;
            cout<<"==================================="<<endl;
        }
};

int main(){
    //create an object of the derived class
    Student student1;

    student1.inputStudent();
    student1.displayStudent();

    return 0;
}
