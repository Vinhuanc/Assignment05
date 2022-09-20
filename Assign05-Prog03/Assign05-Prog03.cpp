//Huan Chen Assignment05-Program03
#include<iostream>
#include<cmath>
using namespace std;

//int main(){
//    double pay = 0.01, pays, total;
//    int day=1, days;
//
//    do{
//    cout << "For how many days will the pay double?";
//    cin >> days;
//        cout << "Day" << "\t\t" << "Total Pay"<<"\n";
//        cout << "------------"<<"\n";
////0.02  0.04  0.08  0.16       total 1.26
//
//        for(day =1;day <= days; day++){
//
//            pays = pay*=2;
//          //  pays = pay+=2;
//        cout << day << "\t\t" << pays <<"\n";
//
//            total += pays;
//
//        }
//        cout << "Total"<< "\t\t" <<total <<"\n";
//
//    } while(days >= 1);
//}


//this version of code displays $0.01 for Day1, only because I manually cout displayed the $ and Day1 code; and making the loop start on Day 2.
int main(){
    double pay = 0.01, pays, total;
    int day=1, days;

    do{
    cout << "For how many days will the pay double?";
    cin >> days;
    cout << "Day" << "\t\t" << "Total Pay"<<"\n";
    cout << "------------"<<"\n";
    cout << "1" <<"\t\t" << "0.01"<<"\n";
    for(day =2;day <= days; day++){
    pays = pay*=2;
    cout << day << "\t\t" << pays <<"\n";
    total += pays;
    }
    cout << "Total"<< "\t\t" <<(total+0.01) <<"\n";
    } while(days >= 1);
}
