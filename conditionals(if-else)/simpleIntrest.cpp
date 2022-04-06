#include<iostream>
using namespace std;
int main(){
    float SI, pri, rate, time;

    cout << "Enter amount :  " << endl;
    cin >> pri;

    cout << "Enter rate of interest : " << endl;
    cin >> rate;

    cout << "Enter time(in years) : " << endl;
    cin >> time;

    SI = (pri * rate * time) / 100;

    cout << "Simple Intrest : " << SI << endl;
    
    return 0;
}