#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int num;
    cin >> num;
    int res = 0;
    while (num != 0)
    {
        int dig = num % 10;
        res = res * 10 + dig;
        num /= 10;
    }
    cout << res;
    return 0;
}