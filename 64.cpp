// Strange Counter

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin >> t;

    long long int set = 0;
    long long int lastPos = 0;
    long long int prev = 3;
    long long int count;

    while(true) {
        set++;
        if (t <= lastPos)
        {
            count = lastPos - t;
            break;
        }
        lastPos += prev;
        prev *= 2;

    }
    cout << count+1;
    return 0;
}
