// Lonely Integer

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    int* a = NULL;
    a = new int[n];

    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    int p = a[0];
    for (int i = 1; i < n; i++)
    {
        p = p^a[i];
    }
    cout << p;
}