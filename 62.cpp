// Jumping on the Clouds
// cases not passed
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int e = 100;

    int pos = 0;
    int flag = 0;

    while (flag != 1)
    {
        pos += k;
        if(arr[pos] == 1)
            e -= 3;
        else
            e -= 1;
        
        if(pos+1 > n-k)
        pos = pos+k-n;

        if(pos == 0)
            flag = 1;
    }
    
    cout << e-1;
    return 0;
}