#include <iostream>
using namespace std;

int staircase(int n)
{
    if (n < 0)
    {
        return 0;
    }
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return staircase(n - 1) + staircase(n - 2) + staircase(n - 3);
    }
}

int main()
{
    int num;
    cin >> num;
    cout << staircase(num) << endl;
}