// Halloween Sale
// 3/52 not passed
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int p, d, m, s;
    cin >> p >> d >> m >> s;

    int k = 0;
    int c = 0;

    while(s >= m)
    {
        c++;

        if(c == 1)
            k = p;
        else{
            if(k-d >= m)
                k = p-(d*(c-1)); 
            else
                k = m;
        }
            
        s -= k;
    }
    // c -= 1;
    cout << c;
    return 0;
}
