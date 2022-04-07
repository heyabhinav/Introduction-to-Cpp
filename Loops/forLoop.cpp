/* Input a number from user n and print numbers from 1 to n.

To deal with this kind of problems we'll use the concepts of loops.
Here we'll use the 'for' loop.
Syntax:

    for (intialization; condition; increment/decrement){
        //block of code;
    }

*/

#include<iostream>
using namespace std;
int main(){

    int n;

    cout << "Enter a number : " << endl;
    cin >> n;

    for(int counter = 1; counter <= n; counter++){
        cout << counter << endl;
    }
    return 0;
}