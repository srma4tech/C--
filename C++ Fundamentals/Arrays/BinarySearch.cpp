#include <iostream>
using namespace std;

int binarySearch(int *arr, int size, int key)
{
    int start = 0, end = size - 1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int n, ele;
    cout << "Enter No of Elements: " << endl;
    cin >> n;
    cout << "Enter Array Elements - " << endl;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter Element to Search: " << endl;
    cin >> ele;

    cout << "Element is at " << binarySearch(arr, n, ele) << " index" << endl;
    return 0;
}