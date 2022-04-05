#include<iostream>
using namespace std;
int main()
{
    float a, b, r;
    char ch;
    cout << "Enter operads (a and b) : " << endl;
    cin >> a >> b;
    cout << "Enter operator (+,-,/,*) : " << endl;
    cin >> ch;

    switch (ch)
    {
    case '+': r = a + b;
              break;
    case '-': r = a - b;
              break;
    case '/': r = a / b;
              break;
    case '*': r = a * b;
              break;
    default: cout << "Invalid Operator!!!";
            break;
    }
    cout << "Result : " << r << endl;
    return 0;
}