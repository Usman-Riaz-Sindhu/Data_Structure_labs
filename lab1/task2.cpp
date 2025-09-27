#include <iostream>
using namespace std;
int main()
{
    int a = 20;
    int *p = &a;
    cout << "a before: " << a << endl;
    *p = *p + 5;
    cout << "a after: " << a << endl;
    return 0;
}