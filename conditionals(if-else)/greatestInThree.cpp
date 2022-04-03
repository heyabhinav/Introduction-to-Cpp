/* Input three numbers and print the greatest number.

Now think what if we want to check multiple conditions?. 
Yes, we can do that by writing multipple IFs, but is that efficient?
The answer is no, it isn't because, if we write multiple ifs then every condition 
will be checked which may not supposed to be checked if some other condition was true or false.

So to move ahead of this problem we'll use 'else if'
Syntax:
    if(<condition-1>){
        //block-1;
    }
    else if(<condition-2){
        //block-2;
    }
    else{
        //block-3;
    }
*/

#include<iostream>
using namespace std;
int main(){
    int num1, num2, num3, largest;

    cout << "Enter three numbers separated by space : " << endl;
    cin >> num1 >> num2 >> num3;

    if (num1 > num2){
        if(num1 > num3)
            largest = num1;
        else
            largest = num3;
    }

    else if (num2 > num1){
        if (num2 > num3)
            largest = num2;
        else
            largest = num3;
    }
    
    else
        largest = num3;
    
    cout << "Largest number : " << largest << endl;

    return 0;
}