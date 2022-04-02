/* Take marks in five subjects as input and then print the total marks and percentage scored.*/
#include<iostream>
using namespace std;
int main(){
    float s1, s2, s3, s4, s5;

    cout << "Enter marks in five subject : " << endl;
    cin >> s1 >> s2 >> s3 >> s4 >> s5;

    float sum = s1 + s2 + s3 + s4 + s5;

    float percentage = sum / 5.0;
    // percentage = (sum / 500) * 100 ==> sum / 5.0

    cout << "Total marks : " << sum << endl;
    cout << "Percentage : " << percentage << "%" << endl;

    return 0;
}