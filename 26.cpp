// Sock Merchant
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    sort(a, a+n);
    
    // frequency array b
    int size = a[n-1] + 5;
    int b[size];

    for (int i = 0; i < size; i++)
    {
        b[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        int k = a[i];
        b[k]++;
    }

    int c = 0;
    for (int i = 0; i < size; i++)
    {
        if(b[i] > 0)
        {
            c += b[i]/2;
        }
    }

    cout << c;

    return 0;
}