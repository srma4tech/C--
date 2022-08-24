#include <iostream>
using namespace std;

int main()
{
    int inp, sum = 0;
    while (true)
    {
        cin >> inp;
        sum += inp;
        if (sum < 0)
        {
            cout << "Exiting....";
            break;
        }
        else
        {
            cout << "Input value: " << inp << endl;
        }
    }

    return 0;
}