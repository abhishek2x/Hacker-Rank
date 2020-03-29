// Jumping on the Clouds
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    int min = 0;
    int ind = 0;
    while(ind < n-1)
    {
        if(a[ind+2] != 1)
        {
            min++;
            ind += 2;
        }
        else
        {
            min++;
            ind += 1;
        }
    }
    cout << min;
    return 0;
}
