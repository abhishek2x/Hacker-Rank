// Super digit
// Iterative method = TLE
// Efficient solution can be achieved via Recursion 
#include <bits/stdc++.h>
using namespace std;

int giveNum(unsigned long long int n, int k)
{

    int factor = 1;
    int p = k;
    while (p > 0) {
        factor *= 10;
        p--;
    }
    int mun = n;
    // cout << factor << endl;

    while(k>=1){
        // cout << n << "\t";
        n = n * factor;
        n += mun;
        // factor *= factor;
        k--;
    }

    return n;
}

int main(){

    ios :: sync_with_stdio(false);
    cin.tie(0);

    unsigned long long int n;
    int k;
    cin >> n >> k;

    unsigned long long int num = giveNum(n, k);

    while(n > 9)
    {
        unsigned long long int o = n;

        int a, b= 0;
        while(n>0)
        {
            a = o%10;
            b += a;
            o /= 10;
        }

        n = b;
    }

    cout << n;
    return 0;
}