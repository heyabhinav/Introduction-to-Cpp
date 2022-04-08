/* Take an integer as an input from a user and print the factorial of that number.*/

#include<iostream>
using namespace std;

int main()
{
    int num, fact=1, result;
    cout << "Enter number : " << endl;
    cin >> num;

    if(num == 1 || num == 0){
        result = fact;
    }
    else{
        for (int i = 1; i <= num; i++)
        {
            fact = fact * i;
        }
    }
    result = fact;

    cout << result;

    return 0;
}