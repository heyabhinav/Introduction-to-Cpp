/*An array is a collection of items stored at contiguous memory locations.
  The idea is to store multiple items of the same type together.
  
  
  Syntax : 
    for declaring an array:
        <datatype> <identifier>[] = {<value>};
    
    for accessing element of an array:
        <name_of_array>[<index_number_of_element>]*/

#include <iostream>
using namespace std;

int main(){
    // here, we are creating interger type array of size 5.
    int arr[] = {1,2,3,4,5};

    // printing elements
    cout << arr[0] << endl;
    cout << arr[1] << endl;
    cout << arr[2] << endl;
    cout << arr[3] << endl;
    cout << arr[4] << endl;

    // Same output can be achieved using loop.
    cout << "Using loop : " << endl;
    for (int i=0; i<5; i++){
        cout << arr[i] << endl;
    }

    return 0;
}