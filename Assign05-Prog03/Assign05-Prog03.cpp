//Huan Chen Assignment05-Program03
#include<iostream>
#include<cmath>
using namespace std;

int main(){
    double pay = 0.01, pays, total=0;
    int day=0, days;

    do{
    cout << "For how many days will the pay double?";
    cin >> days;
    cout << "Day" << "\t\t" << "Total Pay"<<"\n";
    cout << "------------"<<"\n";

    for(day = 1; day <= days; day++){
        cout << day << "\t\t" << pay <<"\n";
       
        total += pay;
        pay *=2;
        

    }
        
    cout << "Total"<< "\t\t" <<total<<"\n";

    } while(days >= 1);
        cout << "Error. Entered days must be greater than 1.";
};

