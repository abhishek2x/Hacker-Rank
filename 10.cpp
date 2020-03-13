#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    int pr = 0, sec = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i == j)
            pr += a[i][j];
            if(i+j == n-1)
            sec += a[i][j];
        }
    }
    
    if(pr > sec)
    cout << pr-sec;
    else cout << sec-pr;

    return 0;
}