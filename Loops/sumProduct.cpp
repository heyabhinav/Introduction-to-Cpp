/*Given an integer number n, print the difference between the product of its digits and the sum of its digits.*/

#include<iostream>
using namespace std;

int main(){

    int num, sum=0, product=1;
    
    cout << "Enter Number : ";
    cin >> num;

    while (num != 0){
        int remain = num % 10;

        //sum = sum + remain;
        sum += remain;
        // product = product * remain;
        product *= remain;

        num = num / 10;
    }

    cout << "Difference : " << product - sum << endl;

    return 0;
}