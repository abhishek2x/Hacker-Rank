// Find the Median

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int* a = NULL;
    a = new int[n];

    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    
    sort(a, a+n);

    cout << a[n/2];
    return 0;
}
