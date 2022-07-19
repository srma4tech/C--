#include <iostream>
#include <algorithm>
using namespace std;

int findDup(int *arr, int n)
{
    int i = 0, dup;
    sort(arr, arr + n);
    for (i = 0; i < n; i++)
    {
        if (arr[i] == arr[i + 1] && n > 1)
        {
            dup = arr[i];
        }
    }
    return dup;
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
    cout << "Ans : " << findDup(arr, n);
}