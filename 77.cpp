// Beautiful Binary String

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    string b = "010";
    // cout <<s.substr(0,2);
    int f = 0;

    for (int i = 0; i < n-3; i++)
    {
        string k = s.substr(i, 3);
        if(k.compare(b) == 0)
            f++;
    }
    cout << f;

    return 0;
}
