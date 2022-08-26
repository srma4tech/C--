#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n, key, i;
    cin >> n;
    int a[100];
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int largest = INT_MIN;
    int smallest = INT_MAX;

    for (i = 0; i < n; i++)
    {
        if (a[i] > largest)
        {
            largest = a[i];
        }
        if (a[i] < smallest)
        {
            smallest = a[i];
        }
    }
    cout << "Smallest: " << smallest << endl;
    cout << "Largest: " << largest << endl;

    return 0;
}