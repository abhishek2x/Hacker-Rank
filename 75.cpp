// Gemstones

#include <bits/stdc++.h>
using namespace std;

string removeRepeated(string s){
    string k;
    int f = 0;

    for (int o = 0; o < s.length(); o++){   
        f = 0;
        for (int l = o+1; l < s.length(); l++){
            if(s[o] == s[l])
                f++;
        }
        if(f == 0)
            k += s[o];
    }
    return k;
}

string returnCommon(string ans, string s1){
    int f = 0;
    string t;
    int len = ans.length();
    for (int i = 0; i < len; i++)
    {
        f = 0;
        char ch = ans.at(i);
        // cout << ch << "--";
        // if ch is in s1 then f will != 0
        for (int j = 0; j < s1.length(); j++) {
            if(ch == s1.at(j))  {
                f++;
                break;
            }
        }
        if(f != 0)
        {
            t += ch;
        }
    }
    return t;                                       
}

   
int main(){
    int n;
    cin >> n;

    string arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    string ans = arr[0];
    ans = removeRepeated(ans);
    // cout << "removed repeated = " << ans << "\n";

    for (int d = 1; d < n; d++){
        ans = returnCommon(ans, arr[d]);
        // cout << "\n";
    }

    cout << ans.length();
    return 0;
}
