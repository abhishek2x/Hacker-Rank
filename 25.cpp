// Bon Appetit
#include <bits/stdc++.h>
using namespace std;

int main(){
    long int n;
    int k;
    cin >> n >> k;

    int bill[n];
    for (long int i = 0; i < n; i++) {
        cin >> bill[i];
    }
    
    int b;
    cin >> b;

    int sum = 0;
    for (long int i = 0; i < n; i++)
    {
        sum += bill[i];
    }
    

    int Percost = (sum - bill[k])/2;

    if(Percost == b)
    cout << "Bon Appetit";
    else
    cout << b-Percost; 
    
    return 0;

}