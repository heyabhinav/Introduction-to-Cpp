/* Program to take radius of a circle as input and prints out the circumference of that circle.
*/
#include<iostream>
using namespace std;
int main()
{
    float radius,circum;
    cout << "Enter radius of circle : " << endl;
    cin >> radius;

    circum = 2*3.14*radius;
    cout << "Circumference of Cirlce : " << circum;
    return 0;
}