/*Program to take input a number and prints its odd or even.

In this program we are going to deal with conditions. In order to check conditions we will use if-else,
Syntax: 

    if(<condition>){
        //block of code-1
    }
    else{
        //block of code-2
    }

if condition given in "if" is/results true then, "block of code-1" will execute.
otherwise, "block of code-2" will execute which is inside the else block.
*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number : " << endl;;
    cin >> n;

    if (n%2==0){
        cout << "Number is even" << endl;;
    }
    else{
        cout << "Number is odd" << endl;;
    }

    //Code below will also result the same output as above.
    /*
    if (n%2){
        cout << "Number is odd" << endl;
    }
    else{
        cout << "Number is even" << endl;
    }
    */

    return 0;
}