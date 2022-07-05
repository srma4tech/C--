#include <iostream>
using namespace std;

int fi(int arr[], int n, int x)
{
    if (n < 1)
    {
        return 0;
    }
    else if (arr[n-1] == x)
    {
        return 0;
    }
    else
    {
        int i = fi(arr + n-1, n - 1, x);
        return i == -1 ? i : i + 1;
    }
}

int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int x;
    cout << "Enter Element to Search for first Index";
    cin >> x;

    cout << "Last Index is : " << fi(arr, n, x) << endl;
}