// Missing Number

#include <bits/stdc++.h>
using namespace std;

int main(){

    ios :: sync_with_stdio(false);
    cin.tie(0);

    long int n; cin >> n;
    
    int* a = NULL;
    a = new int[n];
    for (long int i = 0; i < n; i++){
        cin >> a[i];
    }
    
    long int m; cin >> m;
    int* b = NULL;
    b = new int[m];
    for (long int i = 0; i < m; i++){
        cin >> b[i];
    }


    int* af = NULL;
    af = new int[100000];
    int* bf = NULL;
    bf = new int[100000];
    
    for (long int i = 0; i < 100000; i++){
        af[i] = bf[i] = 0;
    }

    for (long int i = 0; i < n; i++){
        af[a[i]]++;
    }
    for (long int i = 0; i < m; i++){
        bf[b[i]]++;
    }
    
    for (long int i = 0; i < 100000; i++)
    {
        if(bf[i]-af[i] > 0){
            cout << i << " ";
        }
    }
    
    return 0;
}