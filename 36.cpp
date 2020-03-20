// Beautiful Days at the Movies
#include <bits/stdc++.h>
using namespace std;

int ReverseNum(int n){
    int a ,b = 0;
    while(n!=0){
        a = n%10;
        b = b*10 + a;
        n = n/10;
    }
    return b;
}

int main(){
    int i, j, k;
    cin >> i >> j >> k;
    int index = i;

    int n = j - i;
    int a[n];
    for (int o = 0; o <= n; o++) {
        a[o] = index;
        index++;
    }

    int c = 0;

    for (int o = 0; o <= n; o++)
    {
        int p = a[o];
        int rev = ReverseNum(p);
        if((abs(p-rev) % k) == 0)
        {
            c++;
            // cout << p << " , " << rev << endl;
        }
    }
    
    cout << c;

    return 0;    
}

