// Circular Array Rotation

#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int n, k;
    long long int q;
    cin >> n;
    cin >> k;
    cin >> q;

    long long int a[n];
    for (long long int i = 0; i < n; i++){
        cin >> a[i];
    }

    long long int pos[q];
    for (long long int i = 0; i < q; i++){
        cin >> pos[i];
    }

    int aux[2*n];
    int j = 0;
    for (int i = 0; i < 2*n; i++)
    {
        aux[i] = a[j];
        j++;
        if(j == n)
        j = 0;
    }

    
    
    return 0;
}