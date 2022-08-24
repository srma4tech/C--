#include <iostream>
using namespace std;

bool isPrime(int num)
{
    bool flag=true;
    int i;
    for (i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            flag = false;
            break;
        }
        else
        {
            flag = true;
        }
    }
    // if(i == num){
    //     return true;
    // }
    return flag;
}

int main()
{
    int n;
    cin >> n;
    if (isPrime(n))
    {
        cout << n << " is a Prime Number" << endl;
    }
    else
    {
        cout << n << " is not a Prime Number" << endl;
    }

    return 0;
}