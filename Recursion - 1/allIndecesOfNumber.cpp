#include <iostream>
using namespace std;
int allIndexes(int input[], int size, int x, int output[])
{
    if (size == 0)
    {
        return 0;
    }
    int smallAns = allIndexes(input, size - 1, x, output);

    if (input[size - 1] == x)
    {
        output[smallAns++] = size - 1;
    }
    return smallAns;
}

int main()
{
    int size, ele;
    cin >> size;
    int *arr = new int[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cin >> ele;
    int *out = new int[size];
    cout<<"Output is:" << allIndexes(arr, size, ele, out);
}