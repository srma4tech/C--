#include <iostream>
using namespace std;

void insertionSort(int *arr, int n)
{
    for (int i = 1; i < n; i++)
    {
        int e = arr[i];
        // place the current element at right position in the sorted part
        int j = i - 1;
        while (j >= 0 && arr[j] > e)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = e;
    }
}

int main()
{
    int N;
    cin >> N;
    int *arr = new int[N];
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    insertionSort(arr, N);
    for (int i = 0; i < N; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}