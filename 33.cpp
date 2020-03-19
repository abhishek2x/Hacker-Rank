// Hurdle race
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n;
    cin >> k;
    
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a, a+n, greater<int>());

    if((a[0] - k) > 0)
    cout << a[0]-k;
    else cout << 0;
    
    return 0;
}