#include <iostream>
using namespace std;
void leaks()
{
    int *data = new int[100];
}
void fixed()
{
    int *data = new int[100];
    delete[] data;
}
int main()
{
    for (int i = 0; i < 10000; i++)
    {
        leaks();
    }
    cout << "leaks loop done, memory wasted!!!" << endl;
    for (int i = 0; i < 10000; i++)
    {
        fixed();
    }
    cout << "fixed loop done, no memory wasted!!!" << endl;
    return 0;
}