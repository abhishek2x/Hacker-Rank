// Making Anagrams
#include <bits/stdc++.h>
using namespace std;

int main(){

    ios :: sync_with_stdio(false);
    cin.tie(0);

    string s1, s2;
    cin >> s1 >> s2;

    int f1[26];
    int f2[26];

    for (int i = 0; i < 26; i++){
        f1[i] = f2[i] = 0;
    }


    for (int i = 0; i < s1.length(); i++){
        int k = s1[i] - 'a';
        f1[k]++;
    }

    for (int i = 0; i < s2.length(); i++)
    {
        int k = s2[i] - 'a';
        f2[k]++;
    }
    int c = 0;
    for (int i = 0; i < 26; i++)
    {
        if(f1[i] != f2[i])
            c+= abs(f1[i]-f2[i]);
    }

    // for (int i = 0; i < 26; i++)
    // {
    //     cout << f1[i] << " ";
    // }
    // cout << "\n\n";

    // for (int i = 0; i < 26; i++)
    // {
    //     cout << f2[i] << " ";
    // }
    // cout << "\n\n";
    cout << c << endl;

    return 0;
    
}