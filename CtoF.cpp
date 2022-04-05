#include<iostream>
using namespace std;
int main()
{
    float c,f;
    cout << "Enter temp in Centigrade : " << endl;
    cin >> c;

    f = ((c/5)*9) + 32;

    cout << "Temp in Fahrenheit : " << f << endl;

    return 0;
}