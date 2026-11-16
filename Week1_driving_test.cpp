//Driving Test Result Evaluation System

#include <iostream>
#include <string>
using namespace std;

int main(){
    string student_name;
    float theory_marks, practical_marks, average_score;

    //prompt the user to enter the details
    cout<<"Enter student name: "<<endl;
    cin>>student_name;
    cout<<"Enter theory test marks: "<<endl;
    cin>>theory_marks;
    cout<<"Enter practical test marks: "<<endl;
    cin>>practical_marks;

    //Average Score = (Theory Marks + Practical Marks)/2
    average_score = (theory_marks + practical_marks) / 2;

    cout<<"\n";
    cout<<"ROCKY DRIVING SCHOOL TEST RESULTS "<<endl;
    cout<<"==================================="<<endl;
    cout<<"Student name: "<<student_name<<endl;
    cout<<"Theory marks: "<<theory_marks<<endl;
    cout<<"Practical marks: "<<practical_marks<<endl;
    cout<<"Average score: "<<average_score<<endl;

    //a student passes if the average score is 50 and above
    if (average_score >= 50){
        cout<<"Result: PASSED"<<endl;
    }
    else{
        cout<<"Result: FAILED"<<endl;
    }
    cout<<"==================================="<<endl;

    return 0;
}
