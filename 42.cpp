// Circular Array Rotation
// One test case is not satisfied
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

    // for (long long int i = 0; i < k; i++)
    // {
    //     int temp1 = a[n-1];
    //     for (long long int i = 0; i < n-1; i++) {
    //         a[n-i-1] = a[n-i-2];
    //     }
    //     a[0] = temp1;
    // }


// VERY IMPORTANT // NEW WAY OF ROTATION
    // It will rotate array k times in clockwise direction(right)
    rotate(a, a+n-k, a+n);


    for (long long int i = 0; i < q; i++) {
        cout << a[pos[i]] << endl;
    }

    return 0;
}