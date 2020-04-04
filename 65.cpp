// Super Reduced String

#include <bits/stdc++.h>
using namespace std;

string giveString(string s)
{
    for (int i = 0; i < s.length()-1; i++) 
    {
        if(s.at(i) == s.at(i+1)) 
        {
            string s1 = s.substr(0, i);
            string s2 = s.substr(i+2, s.length());
            
            s = s1+s2;
        }
    }
    return s;
}

bool isPossible(string s)
{
    bool k = false;
    for (int i = 0; i < s.length()-1; i++)
    {
        if(s.at(i) == s.at(i+1))
        {
            k = true;
            break;
        }
    }
    return k;
}

int main()
{
    string s;
    cin >> s;
    int k, p;

    if(isPossible(s) == false)
    cout << s;
    int f = 0;
    while (isPossible(s))
    {
        if(s.length() == 1)
        {
            f = 1;
            cout << s;
            break;
        } 
        else if(s.length() == 2)
        {
            f = 1;
            if(s.at(1) == s.at(0))
                cout << "Empty String";
            else
                cout << s;
            break;
        }
        else{
                s = giveString(s);
                f = 0;
        }
    }
    if(f != 1)
    {
        cout << s;
    }
    return 0;
}
