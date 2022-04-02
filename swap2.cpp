/* Swap values of two variables without using third variables.*/

#include<iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter two numbers separated by space : ";
    cin >> a >> b;
    cout << "Before :" << a << " " << b << endl;
    
    // logic
    a = a + b;
    b = a - b;
    a = a - b;

    cout << "After : " << a << " " << b << endl;
    return 0;
}