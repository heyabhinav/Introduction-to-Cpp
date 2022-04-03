/* Take two numbers from the user and display which number is greater.

In this program we have not used curly brackets ({}) after if and else, because, 
by default, if-else consider the very next statement as its block of statement.
In case you write more than one statement, the code might not execute the way you think it would be.
So be carefull there.

*/


#include<iostream>
using namespace std;
int main(){
    
    int n1, n2;

    cout << "Enter two numbers separated by space : " << endl;
    cin >> n1 >> n2;

    if(n1 > n2)
        cout << "First number is greater than second number." << endl;
    else
        cout << "Second number is greater than first number." << endl;

    return 0;
}