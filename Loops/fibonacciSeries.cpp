/*Print first n numbers of fibonacci series.*/

#include<iostream>
using namespace std;

int main(){

    int n, first=0, second=1, third;

    cout << "Enter value for n : ";
    cin >> n;

    cout << first << " " << second << " ";

    for(int i=2; i<n; i++){
        
        // Next element
        third = first + second;

        //printing next element
        cout << third << " ";

        // Interchanging the values 
        first = second;
        second = third;      
    }

    return 0;
}