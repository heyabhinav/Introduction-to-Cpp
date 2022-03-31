/* Take two numbers from user and display sum of those two numbers.

We'll take input from users using input stream 'cin'.

-> endl : same as '\n', used to print newline character.

*/

#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout << "Enter two numbers separated by space : " << endl;
    cin >> a >> b;

    cout << "Sum : " << a + b;
    
    return 0;
}