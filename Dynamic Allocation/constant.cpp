#include <iostream>
using namespace std;

int main()
{
    // const int
    const int i = 10;
    int const i2 = 10;

    // constant reference from a non const int
    int j = 12;
    const int &k = j;
    j++;
    // k++; - can't update as const declared
    cout << k << endl;

    // constant reference from a const int
    int const j2 = 12;
    int const &k2 = j2;

    // reference from a const int
    int const j3 = 123;
    // int & k3 = j3; - Qualifier dropped (error)
    // k3++;
}