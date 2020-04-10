// Funny String 

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;

    for (int w = 0; w < q; w++){
        string s;
        cin >> s;

        string rev = "";
        for (int i = 0; i < s.length(); i++){
            rev += s.at(s.length()-i-1);
        }
        // cout << rev << " @@@ ";

        int a[s.length()];
        int ar[s.length()];

        for (int i = 0; i < s.length(); i++){
            char ch = s.at(i);
            int k = ch;
            a[i] = k;
        }
        
        for (int i = 0; i < s.length(); i++){
            char ch = rev.at(i);
            int k = ch;
            ar[i] = k;
        }

        // for (int i = 0; i < s.length(); i++){
        //     cout << ar[i] << ", ";
        // }
        // cout << "\n";
        // for (int i = 0; i < s.length(); i++){
        //     cout << a[i] << ", ";
        // }

        int o = 0;
        int o1[s.length()-1];
        int r1[s.length()-1];
        
        for (int i = 0; i < s.length()-1; i++)
        {
            o1[i] = abs(a[i]-a[i+1]);
            r1[i] = abs(ar[i]-ar[i+1]);
        }
        
        for (int i = 0; i < s.length()-1; i++)
        {
            if(o1[i] != r1[i]){
                o = 1;
                break; 
            }
        }
        
        if(o == 0)
            cout << "Funny" << endl;
        else cout << "Not Funny" << endl;
    }
    return 0;
}