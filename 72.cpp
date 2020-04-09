// Weighted Uniform Strings
// 12/20 points :)
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(0);

    string s;
    cin >> s;

    int q;
    cin >> q;

    int qarr[q];
    for (int i = 0; i < q; i++){
        cin >> qarr[i];
    }
    

    int a[26];
    for (int i = 0; i < 26; i++){
        a[i] = 0;
    }
    
    for (int i = 0; i < s.length(); i++){
        int l = s.at(i) - 'a';
        a[l]++;
    }
    
    int newarr[s.length()];
    int ind = 0;
    
    for (int i = 0; i < 26; i++){
        if(a[i] > 0) {
            while(a[i] > 0){
                newarr[ind++] = a[i]*(i+1);
                a[i]--;
            }
        }
    }

    int temp = 0;
    for (int i = 0; i < q; i++) {
        temp = 0;

        // comparing each query with made array
        for (int j = 0; j < ind; j++) {
            if(newarr[j] == qarr[i]){
                temp = 1;
                break;
            }
        }

        if(temp == 1)
            cout << "Yes" << endl;
        else 
            cout << "No" << endl;
    }
    
    return 0;
}