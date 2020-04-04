// CamelCase
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int f = 0;

    for (int i = 0; i < s.length(); i++)
    {
        char ch = s.at(i);
        int k = ch;
        if
        (k >= 65 && k <= 90)
        f++;
    }
    cout << f+1;
    return 0;
}
