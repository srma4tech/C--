#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int num, ans = 0;
    while (N > 0)
    {
        cin >> num;
        ans ^= num;
        N--;
    }
    cout << ans;
    return 0;
}