#include <iostream>
#include <string.h>
using namespace std;

void pairStar(char *arr)
{
    int len = strlen(arr);
    if (arr[0] == '\0')
    {
        return;
    }
    if (arr[0] == arr[1])
    {
        for (int i = len; i >= 2; i--)
        {
            arr[i] = arr[i - 1];
        }
        arr[2] = arr[1];
        arr[1] = '*';
    }
    pairStar(arr + 1);
}

int main()
{
    char str[10000];
    cin.getline(str, 10000);
    pairStar(str);
    cout << str << endl;
}