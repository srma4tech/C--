#include <iostream>
#include <math.h>
using namespace std;

int subSeq(string str, string out[])
{
    if (str.size() == 0) // can also use str.empty()
    {
        out[0] = "";
        return 1;
    }
    string smallStr = str.substr(1);
    int smallOut = subSeq(smallStr, out);
    for(int i=0;i<smallOut;i++){
        out[i + smallOut] = str[0] + out[i];
    }
    return 2 * smallOut;
}

int main()
{
    string str;
    cin >> str;
    int size = pow(2, str.size());
    string *out = new string[size];
    int count = subSeq(str, out);
    for (int i = 0; i < count; i++)
    {
        cout << out[i] << " " << endl;
    }
}