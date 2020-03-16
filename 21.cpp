#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    long int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    long int highest = 0;
    long int lowest = a[0];

    long int hBreak = 0;
    long int lBreak = 0;

    for (int i = 0; i < n; i++)
    {
        if(a[i] > highest){
            highest = a[i];
            hBreak++;
        }

        if(a[i] < lowest){
            lowest = a[i];
            lBreak++;
        }

    }
    
    cout << hBreak-1 << " " << lBreak;

    return 0;
}