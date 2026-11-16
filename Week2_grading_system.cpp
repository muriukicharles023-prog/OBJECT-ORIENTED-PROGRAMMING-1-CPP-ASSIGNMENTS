//Grading System (if-else ladder)

#include <iostream>
#include <string>
using namespace std;

int main(){
    string student_name;
    int marks;
    char grade;

    cout<<"Enter student name: "<<endl;
    cin>>student_name;
    cout<<"Enter exam marks: "<<endl;
    cin>>marks;

    //if-else ladder to assign the grade
    if (marks < 0 || marks > 100){
        cout<<"Invalid marks, enter a value between 0 and 100"<<endl;
        return 0;
    }
    else if (marks >= 70){
        grade = 'A';
    }
    else if (marks >= 60){
        grade = 'B';
    }
    else if (marks >= 50){
        grade = 'C';
    }
    else if (marks >= 40){
        grade = 'D';
    }
    else{
        grade = 'E';
    }

    cout<<"\n";
    cout<<"STUDENT GRADE REPORT "<<endl;
    cout<<"==================================="<<endl;
    cout<<"Student name: "<<student_name<<endl;
    cout<<"Marks: "<<marks<<endl;
    cout<<"Grade: "<<grade<<endl;
    cout<<"==================================="<<endl;

    return 0;
}
