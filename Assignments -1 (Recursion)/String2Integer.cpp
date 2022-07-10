#include <iostream>
using namespace std;

int length(char *arr)
{
    int len = 0;
    while (arr[len] != '\0')
    {
        len++;
    }
    return len;
}

int solution(char *arr, int n)
{
    if (n == 0)
    {
        return arr[n] - '0';
    }
    int smallAns = solution(arr, n - 1);
    int a = arr[n] - '0';
    return (smallAns * 10) + a;
}

int str2Int(char *input)
{
    int size = length(input);
    return solution(input, size - 1);
}

int main()
{
    char str[10000];
    cin.getline(str, 10000);
    int res = str2Int(str);
    cout << res << endl;
}