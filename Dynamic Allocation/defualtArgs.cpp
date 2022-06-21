#include <iostream>
using namespace std;

int sum(int a[], int size, int si = 0)
{
    int sum = 0;
    for (int i = si; i < size; i++)
    {
        sum += a[i];
    }
    return sum;
}

int sum2(int a, int b, int c, int d = 0)
{
    return a+b+c+d;
}
int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }
    cout << "Sum = " << sum2(3,4,6);
}