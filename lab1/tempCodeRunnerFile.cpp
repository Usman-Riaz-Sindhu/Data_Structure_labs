#include <iostream>
using namespace std;
int main()
{
    const char *names[] = {"Usman", "Zain", "Ali", "Sandhu"};
    int n = sizeof(names) / sizeof(names[0]);
    for (int i = 0; i < n; i++)
    {
        cout << 'names[' << i << "] : " << names[i] << endl;
    }
    const char *replace = "Samar";
    names[3] = replace;
    cout << "after repacing names[3] : " << names[3] << endl;
    return 0;
}