// Electronics Shop
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m, b;
    cin >> b;
    cin >> n;
    cin >> m;

    int k[n];
    int d[m];

    for (int i = 0; i < n; i++) {
        cin >> k[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> d[i];
    }

    sort(k, k+n, greater<int>());
    sort(d, d+m, greater<int>());

    int flag = 0;
    int lar = 0;
    int largest;

    for (int i = 0; i < n; i++)
    {
        int t = k[i];
        for (int j = 0; j < m; j++)
        {
            lar = t + d[j];
            if((lar <= b) && (largest < lar))
            {
                largest = lar;
            }
        }
    }

    if(largest == 0)
        cout << "-1";
    else
        cout << largest;
    
    return 0;
}