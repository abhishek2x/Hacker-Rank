// Service Lane

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long int n;
    int T;
    cin >> n >> T;
    
    int a[n];
    for (long int i = 0; i < n; i++){
        cin >> a[i];
    }

    for (int i = 0; i < T; i++)
    {
        long int i1, i2;
        cin >> i1 >> i2;

        int smallest = a[i1];
        // int c =0 ;
        for (long int j = i1; j <= i2; j++)
        {
            // c++;
            if(a[j] <= smallest)
            smallest = a[j];
        }

        cout << smallest << endl;
    }
    return 0;
}