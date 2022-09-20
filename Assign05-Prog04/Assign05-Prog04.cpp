//Huan Chen Assignment05-Program04
#include<iostream>
using namespace std;
int main(){
    double years, inches, months, totalInches=0;
    
   
    cout << "This program will calculate average rainfall over a period of years. How many years do you wish to average?";
    cin >> years;
    double totalMonths = years * 12;
    for(int year =1; year <= years; year++){
        cout<<"Year "<<year <<"\n";
        
        for(int i = 1; i <= 12; i++){
            cout << "Number of inches of rain for month "<< i <<"?";
            cin >>inches;
            totalInches += inches;
            
        }
        
    
        
    }
    double avg = totalInches/totalMonths;
    cout << "Over a period of "<< totalMonths <<" months, " << totalInches << " inches of rain fell."<<"\n";
    cout << "Average monthly rainfall for the period is " << avg <<" inches."<<"\n";
}
