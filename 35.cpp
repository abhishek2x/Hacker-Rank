// Angry Professor
#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    
    for (int i = 0; i < T; i++)
    {
        int n, k;
        cin >> n >> k;

        int a[n];
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        
        int c = 0;
        for (int i = 0; i < n; i++){
            if(a[i] <= 0)
            c++;
        }

        // cout << "\n\nk = " << k << " C = " << c;

        if(k > c)
        cout << "YES\n";
        else cout << "NO\n";
        
    }
    
    return 0;
}