#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    int l = 0;
    for (int i = 0; i < n; i++)
    {
        if(l < a[i])
        l = a[i];
    }

    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if(a[i] == l)
        cnt++;
    }
    
    cout << cnt;
    
    return 0;
}