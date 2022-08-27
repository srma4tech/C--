#include <iostream>
using namespace std;

void selectionSort(int *arr, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        // Find out the smallest index in the unsorted array
        int min_idx = i;
        for (int j = i; j <= size - 1; j++)
        {
            if (arr[j] < arr[min_idx])
            {
                min_idx = j;
            }
        }
        // After the loop we can do swap finally
        swap(arr[i], arr[min_idx]);
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
    selectionSort(arr, N);
    for (int i = 0; i < N; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}