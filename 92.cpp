// Sherlock and Array
// TLE (2 cases failed)
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios :: sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    for (int p = 0; p < T; p++)
    {
        long int n;
        cin >> n;

        int* a = NULL;
        a = new int[n];

        for (long int i = 0; i < n; i++){
            cin >> a[i];
        }
        int flag = 0;
        for (long int i = 0; i < n; i++)
        {
            int l = 0;
            int r = 0;

            for (long int j = 0; j < i; j++){
                l += a[j];
            }
            for (long int k = i+1; k < n; k++){
                r += a[k];
            }

            // cout << "\n" << l << " , " << r;

            if(l == r){
                flag = 1;
                break;
            }
        }

        if(flag == 1)
        cout << "YES" << endl;
        else
        cout << "NO" << endl;
    }
    
}