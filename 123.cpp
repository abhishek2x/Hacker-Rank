// Maximum Perimeter Triangle
// Greedy approach
#include <bits/stdc++.h>
using namespace std;

int main(){
    
    ios :: sync_with_stdio(false);
    cin.tie(0);

    int n;  cin >> n;

    int* a = NULL;
    a = new int[n];

    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    sort(a, a+n, greater<int>());
    int f = 0;
    for (int i = 0; i < n-2; i++)
    {
        if(a[i] < a[i+1] + a[i+2]){
            cout << a[i+2] << " " << a[i+1] << " " << a[i]; 
            f = 1;
            break;
        }
    }
    
    if(f == 0)
    cout << "-1";
    return 0;
}