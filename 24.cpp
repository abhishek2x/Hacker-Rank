// Migratory Birds
#include <bits/stdc++.h>
using namespace std;

int main(){

    ios :: sync_with_stdio(false);
    cin.tie(0);

    long int n;
    cin >> n;
    
    int a[n];
    for (long int i = 0; i < n; i++){
        cin >> a[i];
    }

    sort(a, a+n);

    long int num = a[n-1];
    // cout << num << endl;

    int b[num];

    for (long int i = 0; i < num; i++) {
        b[i] = 0;
    }
    
    for (long int i = 0; i < n; i++) {
        int k = a[i];
        b[k]++;
    }
    

    int freq = 0;
    // int larfreq = 0;
    int ans = 0;

    for (int i = 0; i < num; i++) {
        if(freq < b[i]){
            freq = b[i];
            ans = i;
        }
    }
    
    if(ans == 0)
    ans = a[0];
    
    // sort(b, b+num);

    cout << ans;

    return 0;
}