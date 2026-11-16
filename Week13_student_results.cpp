//Week 13 Task 2: Student Results (binary file)
#include <iostream>
#include <fstream>
using namespace std;

//structure to store one student's record
struct Student{
    char name[30];
    char regNumber[20];
    float totalMarks;
};

int main(){
    Student s1;

    cout<<"Enter name: ";
    cin>>s1.name;
    cout<<"Enter registration number: ";
    cin>>s1.regNumber;
    cout<<"Enter total marks: ";
    cin>>s1.totalMarks;

    //write the record to the binary file
    ofstream out("results.dat", ios::binary);
    out.write((char*)&s1, sizeof(s1));
    out.close();

    //read the record back
    Student s2;
    ifstream in("results.dat", ios::binary);
    in.read((char*)&s2, sizeof(s2));
    in.close();

    cout<<endl;
    cout<<"RECORD READ FROM results.dat"<<endl;
    cout<<"==================================="<<endl;
    cout<<"Name  : "<<s2.name<<endl;
    cout<<"Marks : "<<s2.totalMarks<<endl;
    return 0;
}
