// Alternating Characters

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;

    for (int w = 0; w < q; w++)
    {
        string s;
        cin >> s;

        int f = 0;
        for (int i = 0; i < s.length()-1; i++)
        {
            if(s[i] == s[i+1])
            {
                // s = s.substr(0, i) + s.substr(i+1, s.length());
                f++;
            }
        }
        cout << f << endl;
    }
    return 0;
}