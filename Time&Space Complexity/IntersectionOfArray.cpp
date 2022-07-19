#include <iostream>
#include <algorithm>
using namespace std;

int intersection(int *arr1, int *arr2, int n, int m){
    
}

int main()
{
    int n, m;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin>>m;
    int *arr2 = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }
    cout << "Ans : " << intersection(arr, arr2, n, m);
}