#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];

    for (int  i = 0; i < n; i++){
        cin >> a[i];
    }
    
    int pos=0, neg=0, z=0;

    for (int i = 0; i < n; i++){
        if(a[i] > 0 )
        pos++;
        else if(a[i] < 0)
        neg++;
        else if(a[i] == 0)
        z++;
    }
    cout << fixed;
    cout << setprecision(6);

    double k = ((pos*1000000)/n);
    cout << k/1000000 << endl;
    double l = ((neg*1000000)/n);
    cout << l/1000000 << endl;
    double m = ((z*1000000)/n);
    cout << m/1000000;

    return 0;

}