//Huan Chen Assignment 05 Program 01 only using while loops
#include <iostream>
using namespace std;

int main(){
    int hour=1, speed, distance,hours;
    
    cout << "What is the speed of the vehicle in mph?";
    cin >> speed;
    while(speed < 0){
        cout << "Speed must be greater than 0" <<"\n";
        return 0;
    }
    
    cout << "How many hours has it traveled?" ;
    cin >> hours;
    while(hours > 1){
        cout << "Hour     " << "Distance Traveled" << "\n";
            
            cout << "----------------------"<< "\n";
            while(hours >= 1 ){
                distance = speed * hour;
                
                
                cout << hour << "\t\t\t" << distance <<endl;
               
                hour++;
                if (hour > hours){
                    break;
                }
            
            }
        }
    while(hours < 0){
    cout << "Traveled hours must be greater than 0" << "\n";
        cout <<"How many hours has it traveled?" ;
        cin >> hours;
        cout << "Hour     " << "Distance Traveled" << "\n";
            
            cout << "----------------------"<< "\n";
            while(hours >= 1 ){
                distance = speed * hour;
                
                
                cout << hour << "\t\t\t" << distance <<endl;
               
                hour++;
                if (hour > hours){
                    break;
                }
            
            }
    }
    
}
