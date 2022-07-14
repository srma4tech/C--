#include <iostream>
using namespace std;

int partition(int *arr, int start, int end)
{
    int pivot = arr[start];
    int count = 0;
    for (int i = start + 1; i <= end; i++)
    {
        if (arr[i] <= pivot)
        {
            count += 1;
        }
    }
    int pivotindex = start + count;
    int temp = arr[start];
    arr[start] = arr[pivotindex];
    arr[pivotindex] = temp;

    int i = start, j = end;
    while (i <= pivotindex && j >= pivotindex)
    {
        while (arr[i] <= pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }
        if (i < pivotindex && j > pivotindex)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
    }
    return pivotindex;
}

void quickSort(int *arr, int start, int end)
{
    if (start >= end)
    {
        return;
    }
    int c = partition(arr, start, end);
    quickSort(arr, start, c - 1);
    quickSort(arr, c + 1, end);
}

void quickSort(int input[], int size)
{
    quickSort(input, 0, size - 1);
}

int main()
{
    int size;
    cin >> size;
    int *input = new int[size];
    for (int i = 0; i < size; i++)
    {
        cin >> input[i];
    }
    quickSort(input, size);
    for (int i = 0; i < size; i++)
    {
        cout << input[i] << " ";
    }
}