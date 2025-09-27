// Delete from Array
#include <iostream>
using namespace std;

int main(){
       int A[10] = {2,6,8,7,1}; // create an array of size 10
    int size = 5; // initialize size by 5
    int pos = 2; // and pos by 2

    for(int i =0; i < size-1; i++){ // run a for loop to move elements to the left
        A[i] = A[i+1];
    }
    size--; //decrement size each time

    cout << "After Deletation: ";
    for(int i =0; i < size; i++){ // run a for loop to print all the elements
        cout << A[i] << " ";
    }
    cout << endl; // to go to the new line
    return 0;
}