// Repeated String
//Failed

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(0);

    string s;
    cin >> s;

    int n;
    cin >> n;

    int c = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if(s.at(i) == 'a')
        c++;
    }

    int r = c;
    
    string cp = s;
    while(n > cp.length()){
        cp += s;
        c += r;
    }

    int diff = cp.length() - n;
    for (int i = 0; i < diff; i++)
    {
        if(s.at(s.length()-i-1) == 'a')
        c--;
    }
    
    
    cout << c;

    return 0;
}