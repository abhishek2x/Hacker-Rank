// Drawing Book
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, p;
    cin >> n;
    cin >> p;

    int t;

    if(p > ((n/2)+1))
    {
        // from ending
        t = n-p;
    }
    else
    {
        // from starting 
        t = p;
    }

    cout << t/2;
}

