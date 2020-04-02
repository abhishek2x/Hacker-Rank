// Climbing the Leaderboard
// 9/10
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios :: sync_with_stdio(false);
    cin.tie(0);

    long long int n;
    cin >> n;

    long long int scores[n];
    for (long long int i = 0; i < n; i++){
        cin >> scores[i];
    }
    long long int m;
    cin >> m;

    long long int alice[m];
    for (long long int in = 0; in < m; in++){
        cin >> alice[in];
    }

    long long int sc=0, pos = 0;

    for (long long int j = 0; j < m; j++)
    {
        pos = 0;
        sc = 0;
        for (long long int i = 0; i < n; i++)
        {
            if(scores[i] <= alice[j])
            {
                break;
            }
            if(sc != scores[i])
            {
                pos++;
            }

            sc = scores[i];
        }
        cout << pos+1 << endl;
    }

    return 0;
}
