#include <bits/stdc++.h>
using namespace std;

int main(){
    long int a[5];

    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    long int r[5] = {0};
    for (int i = 0; i < 5; i++)
    {
        if(i != 0)
            r[0] += a[i];
        if(i != 1)
            r[1] += a[i];
        if(i != 2)
            r[2] += a[i];
        if(i != 3)
            r[3] += a[i];
        if(i != 4)
            r[4] += a[i];
    }

    // for (int i = 0; i < 5; i++)
    // {
    //     cout << " --" << r[i] << "--\n";
    // }
    
    long int l=0, s=r[0];

    for (int i = 0; i < 5; i++)
    {
        if(r[i] > l)
        l = r[i];

        if(r[i] < s)
        s = r[i];
    }
    cout << s << " " << l;

    return 0;
}