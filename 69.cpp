// Mars Exploration
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;

    int parts = str.length()/3;

    string newstr = "";
    for (int i = 0; i < parts; i++) {
        newstr += "SOS";
    }
    // cout << newstr;
    int d = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if(str.at(i) != newstr.at(i))
        d++;
    }
    
    cout << d;
    return 0;
}