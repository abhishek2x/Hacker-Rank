// Counting Valleys
// 13/22 test cases failed :(
    
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    char a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    int ar[n+2];
    int index = 0;
    ar[0] = 0;
    ar[n+1] = 0;
    for (int i = 0; i < n; i++)
    {
        if(a[i] == 'U')
            ar[i+1] = ++index;
        else if(a[i] == 'D')
            ar[i+1] = --index; 
    }
    index = 0;
    for (int i = 0; i < n+2; i++)
    {
        if(ar[i] == 0)
        index++;
    }

    // for (int i = 0; i < n+2; i++)
    // {
    //     cout << ar[i] <<" , "; 
    // }
    int ans = index -2;
    if(ans%2 == 0)
    ans /= 2;
    else ans = ans/2 + 1;
    
    cout << ans;
    return 0;
}

