/*Print table of inputted number.

eg:
    n x 1 = n
    n x 2 = 2n
    .
    .
    n x 10 = (10n)

*/

#include<iostream>
using namespace std;

int main(){
    int num;

    cout << "Enter number : ";
    cin >> num;

    for (int i=1 ; i<=10; i++){
        cout << num << " x " << i << " = " << i*num << endl;
    }

    return 0;
}