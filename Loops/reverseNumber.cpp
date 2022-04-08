#include<iostream>
using namespace std;
int main()
{
    int num, remain, reversed=0;

    cout << "Enter number : ";
    cin >> num;

    while(num!=0){
        remain = num % 10;
        reversed = (reversed*10) + remain;
        num = num / 10;
    }

    cout << "Reversed number : " << reversed;

    return 0;
}