// Between two sets 
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n;
    cin >> m;

    int a[n];
    int b[m];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }
    
    int ter;
    if(m >= n)
    ter = m;
    else ter = n;

    int min = b[0], max=0;

    for (int i = 0; i < ter; i++) {
        if(i<n){
            if(max < a[i])
            max = a[i];
        }
        if(i<m){
            if(min > b[i])
            min = b[i];
        }
    }
    
    int sm[100];

    for (int i = 0; i < 100; i++) {
            sm[i] = 0;
    }

    int c = 0;
    int flag1 = 0;
    int ind = 0;

    for (int i = max; i <= min; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            if( ((i % a[j]) == 0) && (a[j] != 0))
            {
                flag1++;
            }
        }
        if( flag1 == n)
        {
            sm[ind] = i;
            ind++;
            c++;
        }
        flag1 = 0;
    }


    int cnt = 0;
    int flag2 = 0;

    for (int i = 0; i < c; i++)
    {
        flag2 = 0;
        int t = sm[i];
        for (int j = 0; j < m; j++)
        {
            if(b[j] % t == 0)
            {
                flag2++;
            }
        }

        if(flag2 == m)
        {
            cnt++;
        }
    }
    
    cout << cnt;

    return 0;
}
