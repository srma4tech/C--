#include <iostream>
#include <algorithm>
#include<cmath>
using namespace std;

int intersection(int *arr1, int n, int sum)
{
    sort(arr1, arr1 + n);
    int count = 0;
    float y = sum / 2;
    for (int i = n - 1; arr1[i] >= ceil(y); i--)
    {
        for (int j = i - 1; j >= 0; j--)
        {
            if (arr1[i] + arr1[j] == sum)
            {
                count++;
            }
        }
    }
    return count;
}

int main()
{
    int N, sum;
    cin >> N;
    int *arr1 = new int[N];
    for (int i = 0; i < N; i++)
    {
        cin >> arr1[i];
    }
    cin >> sum;
    cout << intersection(arr1, N, sum);

    return 0;
}