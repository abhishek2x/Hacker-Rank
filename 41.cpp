// Sherlock and Squares
#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        long int a, b;
        cin >> a;
        cin >> b;


        long int s = ceil(sqrt(a));
        long int e = floor(sqrt(b));

        // cout << s << "--" << e << endl;

        if(e-s < 0)
            cout << "0" << endl;
        else if(e-s == 0)
            cout << "1" << endl;
        else
            cout << e-s+1 << endl;
    }
    return 0;
}