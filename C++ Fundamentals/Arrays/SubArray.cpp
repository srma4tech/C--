#include <iostream>
using namespace std;

void subArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            // Elements of subArray(i,j)
            for (int k = i; k <= j; k++)
            {
                cout << arr[k];
                if (k < j)
                {
                    cout << ",";
                }
            }
            cout << endl;
        }
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

    subArray(arr, N);

    return 0;
}