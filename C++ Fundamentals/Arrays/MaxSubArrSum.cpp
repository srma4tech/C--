#include <iostream>
using namespace std;

void maxSubArraySum(int *arr, int n)
{
    // Generate All SubArrays
    int maxSum = 0, currSum = 0;
    int left = -1, right = -1;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            // Elements of subArray(i,j)
            currSum = 0;
            for (int k = i; k <= j; k++)
            {
                currSum += arr[k];
            }
            // update MAx SUM
            if (maxSum < currSum)
            {
                maxSum = currSum;
                left = i;
                right = j;
            }
        }
    }
    // Print Maximum Sum
    cout << "Maximum Sum is : " << maxSum << endl;

    // Print the sub Array
    cout << "Sub Array is : ";
    for (int i = left; i <= right; i++)
    {
        cout << arr[i];
        if (i < right)
        {
            cout << ",";
        }
    }
    cout << endl;
}

int main()
{
    cout << "Enter No of elements: ";
    int N;
    cin >> N;
    cout << "Enter Array elements: ";
    int *arr = new int[N];
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    maxSubArraySum(arr, N);

    return 0;
}