#include <bits/stdc++.h>
using namespace std;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(0);

    int a[3];
    int b[3];

    for (int i = 0; i < 3; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < 3; i++)
    {
        cin >> b[i];
    }
    
    int sumA = 0, sumB = 0;

    for (int i = 0; i < 3; i++)
    {
        if(a[i] > b[i])
            sumA++;
        else if(a[i] < b[i])
            sumB++;
    }
    cout << sumA << " " << sumB;
}