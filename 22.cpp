// BIRHTDAY CHOCOLATE
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int s[n];
    for (int i = 0; i < n; i++){
        cin >> s[i];
    }

    int d, m;
    cin >> d;
    cin >> m;

    int k, sum1 = 0, ans = 0;

    for (int i = m-1; i <= n; i++)
    {
        sum1 = 0;

        for (int j = abs(i-m+1); j <=i ; j++) {
            sum1 += s[j];
        }

        if(sum1 == d){
            ans++;
        }

        // sum1 = 0;

        // for (int j = i; j <= i+m-1; j++) {
        //     sum1 += s[j];
        // }

        // // cout << sum1 << "\n";

        // if(sum1 == d){
        //     ans++;
        // }

    }
    
   cout << ans;

   return 0;
}
