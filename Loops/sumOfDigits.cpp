/*Take a number from user and print the sum of digits.*/

#include<iostream>
using namespace std;
int main()
{
    int num, remain, sum=0;

    cout << "Enter number : ";
    cin >> num;

    while(num!=0){
        remain = num % 10;
        sum += remain;       // sum = sum + remain;
        num = num / 10;
    }

    cout << "Sum of digits : " << sum;

    return 0;
}