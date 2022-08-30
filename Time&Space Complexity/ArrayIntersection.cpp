#include <iostream>
#include <algorithm>
using namespace std;

void intersection(int *arr1, int *arr2, int n, int m)
{
    sort(arr1, arr1 + n);
    sort(arr2, arr2 + m);
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (arr1[i] == arr2[j])
        {
            cout << arr1[i] << " ";
            i = i + 1;
            j = j + 1;
        }

        else if (arr1[i] < arr2[j])
            i = i + 1;

        else
            j = j + 1;
    }
}

int main()
{
    int N, M;
    cin >> N;
    int *arr1 = new int[N];
    for (int i = 0; i < N; i++)
    {
        cin >> arr1[i];
    }
    cin >> M;
    int *arr2 = new int[M];
    for (int i = 0; i < M; i++)
    {
        cin >> arr1[i];
    }

    intersection(arr1, arr2, N, M);

    return 0;
}