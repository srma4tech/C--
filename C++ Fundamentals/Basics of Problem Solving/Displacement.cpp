#include <iostream>
using namespace std;

/*
    Input - NNNNSSEEWEEE
    Output - Final Displacement is 4 and 2
*/

int main()
{
    char ch;
    ch = cin.get();

    int x = 0, y = 0;
    while (ch != '\n')
    {
        if (ch == 'N' || ch == 'n')
        {
            y++;
        }
        else if (ch == 'S' || ch == 's')
        {
            y--;
        }
        else if (ch == 'E' || ch == 'e')
        {
            x++;
        }
        else if (ch == 'W' || ch == 'w')
        {
            x--;
        }
        ch = cin.get();
    }
    cout << "Final Displacement is " << x << " and " << y << endl;
    if (y > 0)
    {
        while (y > 0)
        {
            cout << "N";
            y--;
        }
    }
    else
    {
        while (y < 0)
        {
            cout << "S";
            y++;
        }
    }
    if (x > 0)
    {
        while (x > 0)
        {
            cout << "E";
            x--;
        }
    }
    else
    {
        while (x < 0)
        {
            cout << "W";
            x++;
        }
    }

    return 0;
}