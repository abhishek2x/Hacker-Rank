// Flatland Space Stations
#include <bits/stdc++.h>
using namespace std;


int main()
{
    long long int n;
    long long int m;
    cin >> n >> m;
    
    int a[m];
    for (long long int i = 0; i < m; i++){
        cin >> a[i];
    }

    int p[n];
    for (long long int i = 0; i < n; i++) {
        p[i] = 0;
    }

    int dis[n];
    long long int maxD = 0;

    for (long long int i = 0; i < n; i++)
    {
        long int ab;
        long long int min = 1000000;
        for (long long int j = 0; j < m; j++)
        {
            ab = abs(i - a[j]);
            if(ab < min)
            min = ab;
        }
        // cout << min << " , ";
        if(min > maxD)
        maxD = min;
    }
    
    cout << maxD;
    return 0;
}