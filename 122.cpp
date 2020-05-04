// String Construction
// Wrong
#include <bits/stdc++.h>
using namespace std;

string reverseS(string str) { 
    string s = "";
    for (int i=str.length()-1; i>=0; i--) 
        s = s + str[i];  
    return s;
} 


int main(){

    ios :: sync_with_stdio(false);
    cin.tie(0);

    int T; cin >> T;
    for (int q = 0; q < T; q++)
    {
        string s;
        cin >> s;

        string p = "";
        int cost = 1;
        p = s[0];
        s = s.substr(1);

        while(s.length() > 0)
        {
            string k;
            k = s.substr(0, p.length());

            cout << p << "--" << k << "--\n";
            string kk = k;
            kk = reverseS(k);
            if(p.compare(k) == 0 || p.compare(kk) == 0){
                p = p + k;
                s = s.substr(k.length());
            }
            else{
                p = p + s[0];
                s = s.substr(1);
                cost++;
            }
            // cout << p << " ";
        }
        cout << cost << endl;
    }
    return 0;
}
 