// HackerRank in a String!

#include<bits/stdc++.h>
using namespace std;

bool isHacker(string s) {
    string s2 = "hackerrank";
    int ind = 0;
    for (int i = 0; i < s.length(); i++)  {
        if(ind < s2.length()) {
            if(s.at(i) == s2.at(ind)) {
                ind++;
            }
        }
    }

    if(ind == s2.length())
        return true;
    else
        return false;
}

int main(){
    int T;
    cin >> T;

    for (int p = 0; p < T; p++){
        string s;
        cin >> s;


        int q = 0;
        for (int i = 0; i < s.length(); i++)
        {
            char ch = s.at(i);
            int c = ch;
            if(ch <= 65 && ch >= 90)  {
                q = 1;
                cout << "NO" << endl;
                break;
            }
        }
        
        if(q == 0)
        {
            int freq[26];

            for (int i = 0; i < 26; i++){
                freq[i] = 0;
            }
            
            for (int i = 0; i < s.length(); i++){
                char c = s.at(i);
                int k = c - 'a' + 1;
                freq[k]++;
            }

            string s2 = "hackerrank";
            int freq2[26];

            for (int i = 0; i < 26; i++){
                freq2[i] = 0;
            }
            
            for (int i = 0; i < s2.length(); i++){
                char c = s2.at(i);
                int k = c - 'a' + 1;
                freq2[k]++;
            }
            int ans = 0;
            for (int i = 0; i < 26; i++)
            {
                if(freq[i] < freq2[i])
                {
                    cout << "NO" << "\n";
                    ans = 1;
                    break;
                }
            }
            if(ans == 0)
            {
                if(isHacker(s))
                    cout << "YES" << endl;
                else cout << "NO"<< endl;
            } 
        }
    }
    return 0;
}