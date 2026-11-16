//Week 13 Task 3: Sales Total (read numbers from a text file)
#include <iostream>
#include <fstream>
using namespace std;

int main(){
    float sale;
    float total = 0;

    ifstream file("sales.txt");

    if(file.is_open()){
        //read each amount until the end of the file
        while(file>>sale){
            total = total + sale;
        }
        //close the file after reading
        file.close();
        cout<<"Total sales: Ksh."<<total<<endl;
    }
    else{
        cout<<"Error: sales.txt could not be opened"<<endl;
    }
    return 0;
}
