// Picking Numbers
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int a[n];
    for (int o = 0; o < n; o++)
    {
        cin >> a[o];
    }

    sort(a, a+n);

    int lar=0, largest=0;

    int freq[100];
    for (int i = 0; i < 100; i++) {
        freq[i] = 0;
    }
    for (int i = 0; i < n; i++) {
        freq[a[i]]++;
    }
    
    for (int i = 0; i < 99; i=i+1)
    {
        lar = freq[i] + freq[i+1];
        if(lar > largest)
        largest = lar;
    }
    
    cout << largest;

    return 0;
}
