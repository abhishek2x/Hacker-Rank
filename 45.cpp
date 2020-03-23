// Append and Delete
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    string t;

    cin >> s;
    cin >> t;
    
    int k;
    cin >> k;

    int tmp = 0;

    int minLen;
    if(s.length() >= t.length())
        minLen = t.length();
    else
        minLen = s.length();

    for (int i = 0; i < minLen; i++)
    {
        if(s.at(i) == t.at(i))
        tmp++;
        else break;
    }
    // cout << tmp << "\n\n";
    int ans = (s.length()-tmp) + (t.length()-tmp);

    if(ans == k)
    cout << "Yes";
    else cout << "No";

    // cout << ans; 
    
    return 0;    
}