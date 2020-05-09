// Permuting Two Arrays
#include <bits/stdc++.h>
using namespace std;

void CheckGreeder(int* a, int* b, int n, int k){
    sort(a, a+n, greater<int>());
    sort(b, b+n);
    int f = 0;
    for (int i = 0; i < n; i++)
    {
        if(a[i]+b[i] < k){
            f = 1;
            cout << "NO" << endl;
            break;
        }
    }
    if(f == 0){
        cout << "YES" << endl;
    }
}

int main(){

    ios :: sync_with_stdio(false);
    cin.tie(0);

    int q; cin >> q;
    for (int w = 0; w < q; w++)
    {
        int n, k;
        cin >> n >> k;

        int* a = NULL;
        a = new int[n];

        int* b = NULL;
        b = new int[n];

        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        
        for (int i = 0; i < n; i++){
            cin >> b[i];
        }

        CheckGreeder(a, b, n, k);
    }
    return 0;
}

/*
SIX - STARS ACHIEVED
*/