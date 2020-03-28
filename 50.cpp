// Taum and B'day

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        long long int b, w;
        cin >> b;
        cin >> w;

        long long int bc, wc, z;
        cin >> bc;
        cin >> wc;
        cin >> z;
        
        if(wc > bc)
        {
            if(wc-bc > z)
            {
                long long int v = wc-bc;
                long long int cost = bc*(b+w) + z*w;
                cout << cost << endl;
            }
            else
                cout << ((b*bc) + (w*wc)) << endl;
        }
        else
        {
            if(bc-wc > z)
            {
                long long int v = bc-wc;
                long long int cost = wc*(b+w) + z*b;
                cout << cost << endl;
            }
            else
                cout << ((b*bc) + (w*wc)) << endl;
        }
        
    }
    return 0;
}