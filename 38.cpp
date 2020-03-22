// Save the Prisoner!
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(0);

    unsigned long int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        unsigned long int n;
        unsigned long int m;
        unsigned long int s;
        cin >> n ;
        cin >> m ;
        cin >> s ;

        unsigned long int t = m+s-1;
        while(n < t)
        {
            t -= n;
        }
        
        cout << t << endl;
        
    }
    
    return 0;
}