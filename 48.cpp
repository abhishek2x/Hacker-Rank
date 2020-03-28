// Equalize the Array
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    
    int freq[100];
    for (int i = 0; i < 100; i++){
        freq[i] = 0;
    }
    
    for (int i = 0; i < n; i++){
        freq[a[i]]++;
    }

    int m = freq[0], lar = 0;
    for (int i = 0; i < 100; i++)
    {
        if(freq[i] > lar)
        lar = freq[i];
    }

    cout << n-lar;
    return 0;
}