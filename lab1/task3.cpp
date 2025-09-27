#include <iostream>
using namespace std;

int main()
{
    const char *names[] = {"Usman", "Ali", "Saba", "Agha", "Zain"};
    int n = sizeof(names) / sizeof(names[0]);
    for (int i = 0; i < n; ++i)
    {
        cout << "names[" << i << "] -> " << names[i] << "\n";
    }
    const char *replace = "Usman Riaz Sindhu";
    names[2] = replace;
    cout << "After change, names[2] -> " << names[2] << "\n";
    return 0;
}
