#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter how many scores: ";
    cin >> n;
    int *scores = new int[n];       // dynamic array ha ya  aur new int n ka mtlb ha ka run timr pa array bana ga 
    cout << "Enter " << n << " scores: ";
    for (int i = 0; i < n; i++)
    {
        cin >> scores[i];
    }
    long long sum = 0;      // to handle long numbers
    for (int i = 0; i < n; i++)
    {
        sum += scores[i];
    }
    cout << "Average is: " << (double)sum / n << endl;
    delete[] scores;
    scores = nullptr;
    return 0;
}