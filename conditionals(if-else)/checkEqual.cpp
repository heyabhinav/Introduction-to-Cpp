/*Input two numbers and check whether they are equal or not.*/

#include<iostream>
using namespace std;
int main(){
    int a,b;

    cout << "Enter two numbers : " << endl;
    cin >> a >> b;

    if(a==b)
        cout << "They are equal." << endl;
    else
        cout << "They are not equal." << endl;
    
    return 0;
}