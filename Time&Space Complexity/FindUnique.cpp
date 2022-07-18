#include <iostream>
using namespace std;

int findUniq(int *arr, int n)
{
    int uniq = 0;
    for (int i = 0; i < n; i++)
    {
        uniq ^= arr[i];
    }
    return uniq;
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
    cout << "Ans : " << findUniq(arr, n);
}