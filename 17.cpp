#include <bits/stdc++.h>
using namespace std;

int main(){
    long int s, t, a, b, m, n;
    // first three lines of input
    cin >> s;
    cin >> t;
    cin >> a;
    cin >> b;
    cin >> m;
    cin >> n;


    int apples[m];
    int oranges[n];

    for (int i = 0; i < m; i++){
        cin >> apples[i];
    }
    for (int i = 0; i < n; i++){
        cin >> oranges[i];
    }
    
    int appleStart = s-a;
    int appleEnd = t-a;
    
    // below valued will be neagtive
    int orangeStart = (s-b); //-5
    int orangeEnd = (t-b);  //-2

    int cntApple = 0;
    int cntOranges = 0;

    for (int i = 0; i < m; i++)
    {
        if(apples[i] < 0)
        {
            if((apples[i] <= appleStart) && (apples[i] >= appleEnd))
            {
                cntApple++;
            }
        } else {
            if((apples[i] >= appleStart) && (apples[i] <= appleEnd))
            {
                cntApple++;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        if(oranges[i] < 0){
            if((oranges[i] >= orangeStart) && (oranges[i] <= orangeEnd))
            {
                cntOranges++;
            }
        }
        else{
            if((oranges[i] <= orangeStart) && (oranges[i] >= orangeEnd))
            {
                cntOranges++;
            }
        }
    }
    cout << cntApple << endl << cntOranges;

    return 0;    
}