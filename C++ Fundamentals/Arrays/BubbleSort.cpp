#include <iostream>
using namespace std;

void bubbleSort(int *arr, int n)
{
    int itr = 1;
    while (itr < n - 1)
    {
        // Pairwise swapping in the unsorted array
        for (int j = 0; j <= n - itr - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
        itr++;
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
    bubbleSort(arr, N);
    for (int i = 0; i < N; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}