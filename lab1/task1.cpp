#include <iostream>
using namespace std;

int main()
{
    int x = 42;
    int *p = &x;
    int **q = &p;
    cout << "x: " << x << endl;
    cout << "*p: " << *p << endl;
    cout << "**q: " << **q << endl;

    **q = 100;
    cout << "After **q = 100, x: " << x << endl;
    return 0;
}