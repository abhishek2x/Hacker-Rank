// Pangram

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1;
    getline(cin, s1);

    string s = "";

    for (int i = 0; i < s1.length(); i++){
        int k = s1.at(i);
        s += toupper(k);
    }
    // cout << s << "\n";
    int freq[26];

    for (int i = 0; i < 26; i++){
        freq[i] = 0;
    }
    
    for (int i = 0; i < s.length(); i++){
        int k = s.at(i) - 'A';
        freq[k]++;
    }
    
    int y = 0;
    for (int i = 0; i < 26; i++){
        // cout << freq[i] << " , ";
        if(freq[i] == 0){
            y = 1;
            break;
        }
    }
    
    if(y == 1)
    cout << "not pangram";
    else cout << "pangram";

    return 0;
}