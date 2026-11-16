//Admission Decision (Nested if)

#include <iostream>
#include <string>
using namespace std;

int main(){
    string student_name;
    int age;
    float exam_score;

    cout<<"Enter student name: "<<endl;
    cin>>student_name;
    cout<<"Enter age: "<<endl;
    cin>>age;
    cout<<"Enter exam score: "<<endl;
    cin>>exam_score;

    cout<<"\n";
    cout<<"ADMISSION DECISION "<<endl;
    cout<<"==================================="<<endl;
    cout<<"Student name: "<<student_name<<endl;

    //first check the age
    if (age >= 18){
        //then check the score
        if (exam_score >= 50){
            cout<<"Decision: Admitted"<<endl;
        }
        else{
            cout<<"Decision: Not Admitted: Low Score"<<endl;
        }
    }
    else{
        cout<<"Decision: Not Admitted: Underage"<<endl;
    }
    cout<<"==================================="<<endl;

    return 0;
}
