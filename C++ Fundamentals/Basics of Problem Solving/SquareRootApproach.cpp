#include <iostream>
using namespace std;

int main()
{
    int N;
    int P;
    cin >> N;
    cin >> P;
    float ans = 0;
    float inc = 1.0;

    for (int times = 0; times <= P; times++)
    {
        //Finalise the correct digit for the current place
        while (ans * ans <= N)
        {
            ans += inc;
        }
        ans -= inc;
        //Updates the increment for the next position
        inc /= 10;
    }

    cout << ans;
    return 0;
}