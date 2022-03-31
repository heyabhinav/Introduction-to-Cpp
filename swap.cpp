/* Swap values of two variables using third variables.*/

#include<iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter two number (a and b) : ";
    cin >> a >> b;
    cout << "Before :" << a << b << endl;
    c = a;
    a = b;
    b = c;
    cout << "After : " << a << b;
    return 0;
}