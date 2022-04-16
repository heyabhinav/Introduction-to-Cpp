#include<iostream>
using namespace std;
int main(){
    int marks;

    cout << "Enter marks :";
    cin >> marks;

    if (marks >= 80 && marks <= 100){
        cout << "A";
    }
    else if(marks >= 70 && marks <= 79){
        cout << "B";
    }
    else if(marks >= 60 && marks <= 69){
        cout << "C";
    }
    else if(marks >= 50 && marks <= 59){
        cout << "D";
    }
    else{
        cout << "F";
    }
    return 0;
}