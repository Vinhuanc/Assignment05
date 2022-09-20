//Huan Chen Assignment05-Program02 using do-while loops
#include <iostream>
using namespace std;



int main(){
    int hour=1, speed, distance,hours;
    
    cout << "What is the speed of the vehicle in mph?";
    cin >> speed;
    cout << "How many hours has it traveled?" ;
    cin >> hours;
    do{
        if(speed <= 0 || hours <= 0){
            cout << "Invalid answer. Speed and hours must be greater than 0.";
            return 0;
        }
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
    }while(speed < 0 && hours > 1);

    
}
