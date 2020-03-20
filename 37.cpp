// Viral Advertising
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int l;
    int s = 5;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        l = floor(s/2);
        sum += l;
        s = l*3;
    }

    cout << sum;
    
    return 0;
}