#include <iostream>
using namespace std;

int subset(int input[], int n, int output[][20])
{
    // Write your code here
    if (n == 0)
    {
        output[0][0] = 0;
        return 1;
    }
    int count = subset(input + 1, n - 1, output);
    int i, j;
    for (i = 0; i < count; i++)
    {
        output[count + i][0] = output[i][0] + 1;
        output[count + i][1] = input[0];
    }

    for (i = 0; i < count; i++)
    {
        for (j = 1; j < output[count + i][0]; j++)
        {
            output[count + i][j + 1] = output[i][j];
        }
    }
    return 2 * count;
}

int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int output[20][20];

    int length = subset(arr, n, output);
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < output[i][0] + 1; j++)
        {
            cout << output[i][j] << " ";
        }
        cout << endl;
    }
}