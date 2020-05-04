// Amalgam
#include <bits/stdc++.h>
using namespace std;

int main(){

    ios :: sync_with_stdio(false);
    cin.tie(0);

    int T; cin >> T;

    for (int q = 0; q < T; q++)
    {
        string s;
        cin >> s;
        

        string s1="", s2="";
        if(s.length()%2 == 1)
            cout << "-1" << endl;
        else
        {
            s1 = s.substr(0, s.length()/2);
            s2 = s.substr(s.length()/2, s.length());

            // cout << s1 << " --- " << s2;

            int f1[26];
            int f2[26];
            for (int i = 0; i < 26; i++){
                f2[i] = 0;
                f1[i] = 0;
            }

            for (int i = 0; i < s1.length(); i++){
                int k = s1[i] - 'a';
                f2[k]++;
                int l = s2[i] - 'a';
                f1[l]++;
            }

            // for (int i = 0; i < 26; i++)
            // {
            //     cout << f1[i] << " ";
            // }
            
            int c = 0;
            for (int i = 0; i < 26; i++){
                if(f1[i] > f2[i])
                c += f1[i]-f2[i];
            }
            
            cout << c << endl;
        }
    }
      return 0;
}