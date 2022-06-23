#include <iostream>
using namespace std;

int printDig(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return 1 + printDig(n / 10);
    }
}

int main()
{
    // int num;
    // cin>>num;
    cout<<printDig(565);
}