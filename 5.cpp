#include <bits/stdc++.h>
using namespace std;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(0);
    long int n, m;
    cin >> n;
    cin >> m;
    int arr[n];

    // initialising 1d array
    for (int i = 0; i < n; i++) {
            arr[i] = 0;
    }

    int a[m];
    int b[m];
    long int k[m];

    for (long int i = 0; i < m; i++){
        cin >> a[i];
        cin >> b[i];
        cin >> k[i];
    }

    int leftInd;
    int rightInd;
    long int value;

    for (long int i = 0; i < m; i++) {
        leftInd = a[i];
        rightInd = b[i];
        value = k[i];

        for (long int k = leftInd; k <= rightInd; k++) {
            arr[k] += value;
        }
    }
    
    int large = 0;

    for (long int i = 0; i < n; i++) {
        if(arr[i] > large)
        large = arr[i];
    }
    
    cout << large;
    return 0;
}
