// Beautiful Triplets
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, d;
    cin >> n >> d;

    long int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    int c = 0;
    int p, k;
    for (int i = 0; i < n; i++)
    {
        long int f = a[i] + d;
        long int s = a[i] + (2*d);
        p = 0;
        k = 0;

        for (int j = i+1; j < n; j++)
        {
            if(f == a[j])
                p++;
            if(s == a[j])
                k++;
        }
        if(p == 1 && k == 1)
            c++;
        // cout << " F = " << f << "S = " << s << "\n";
    }
    cout << c;

    return 0;
}