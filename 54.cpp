// Minimum Distances
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    long int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    int minDis = -1;
    long int dis = 1000000;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            minDis = -1;
            if(i != j)
            {
                if(a[i] == a[j])
                minDis = abs(j-i);
                // cout << minDis << " ";
            }
            if(minDis != -1)
            {
                if(dis > minDis)
                    dis = minDis;
            }
        }
    }
    if(dis != 1000000)
    cout << dis;
    else cout << "-1";
    return 0;
}
