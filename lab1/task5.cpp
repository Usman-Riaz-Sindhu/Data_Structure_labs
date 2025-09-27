#include <iostream>
using namespace std;
int main()
{
    int *p = new int(50);
    cout << "Value of *p before delete: " << *p << endl;
    delete p;
    p = nullptr;
    if (p == nullptr)
    {
        cout << "Pointer is safetly set to nullptr after delete." << endl;
    }
    return 0;
}