#include <iostream>
using namespace std;

int main()
{
    string *sp = new string;
    *sp = "def";

    cout << sp << endl;
    cout << *sp << endl;

    string s = "abc";
    cout << s << endl;
    getline(cin, s);
    cout << s << endl;

    string s1;
    s1 = "def";

    string s2 = s + s1;
    
    cout << s2 << endl;
    cout << s2.length() << endl;
    cout << s.substr(3) << endl;
    cout << s.substr(3, 3) << endl;
    cout << s1 << endl;
    cout << s << endl;
    cout << s2.find("def") << endl;
}