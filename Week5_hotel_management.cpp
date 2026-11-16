//Week 5: Hotel Management System Using Arrays
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    srand(time(0)); //so that random values change each run

    //1D ARRAY - WEEKLY REVENUE TRACKER
    float revenue[7];
    float totalRevenue = 0;
    float averageRevenue;

    cout<<"WEEKLY REVENUE TRACKER"<<endl;
    //input revenue for each day
    for(int i = 0; i < 7; i++){
        cout<<"Enter revenue for day "<<i+1<<": Ksh.";
        cin>>revenue[i];
        totalRevenue += revenue[i];
    }
    averageRevenue = totalRevenue / 7;

    cout<<"==================================="<<endl;
    cout<<"Total weekly revenue : Ksh."<<totalRevenue<<endl;
    cout<<"Average daily revenue: Ksh."<<averageRevenue<<endl;
    cout<<endl;

    //2D ARRAY - ROOM OCCUPANCY (ONE BRANCH)
    int occupancy[5][10];

    //simulate occupancy data: 1 = occupied, 0 = vacant
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 10; j++){
            occupancy[i][j] = rand() % 2;
        }
    }

    cout<<"ROOM OCCUPANCY (ONE BRANCH)"<<endl;
    cout<<"==================================="<<endl;
    for(int i = 0; i < 5; i++){
        int occupied = 0;
        int vacant = 0;
        for(int j = 0; j < 10; j++){
            if(occupancy[i][j] == 1){
                occupied++;
            }
            else{
                vacant++;
            }
        }
        cout<<"Floor "<<i+1<<": Occupied = "<<occupied<<", Vacant = "<<vacant<<endl;
    }
    cout<<endl;

    //3D ARRAY - MULTIPLE BRANCHES
    int chain[3][5][10];
    int totalOccupied = 0;

    //assign random occupancy to each room and count occupied rooms
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 5; j++){
            for(int k = 0; k < 10; k++){
                chain[i][j][k] = rand() % 2;
                if(chain[i][j][k] == 1){
                    totalOccupied++;
                }
            }
        }
    }

    cout<<"ALL BRANCHES"<<endl;
    cout<<"==================================="<<endl;
    cout<<"Total occupied rooms across all branches: "<<totalOccupied<<" out of 150"<<endl;
    return 0;
}
