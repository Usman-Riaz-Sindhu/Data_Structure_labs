// Tak 1 : Insert into an array

#include <iostream>
using namespace std;

int main(){
    int A[10] = {2,6,8,7,1}; // create an array of size 10
    int size = 5; // intialize size to 5
    int pos = 5; // and pos 3
    int val = 9; // and val to 9

    for (int i = size; i > pos; i--){ // run a for loop that start from size and go till pos and move to right
        A[i] = A[i-1];
    }
    A[pos] = val; // now add the value to the empty position in array
    size++; // increment size

    cout << "After Insertion: ";
    for(int i =0; i< size; i++){ // a loop to print all the elements
        cout << A[i] << " ";
    }
    cout << endl;
    return 0;
}