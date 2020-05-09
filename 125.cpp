// The Power sum

#include <bits/stdc++.h>
using namespace std;
int ans = 0;

int powerSum(int num, int x, int k, int n){

    if(x == 0){
        ans++;
    }
    int r = (int)floor(sqrt(num));
    for (int i = k+1; i <= r; i++)
    {   
        int a = x - pow(i, n);
        if(a >= 0)
            powerSum(num, a, i, n); 
    }
    return ans;
}

int main(){

    ios ::sync_with_stdio(false);
    cin.tie(0);

    int X, N;
    cin >> X >> N;

    cout << powerSum(X, X, 0, N );

    return 0;
}