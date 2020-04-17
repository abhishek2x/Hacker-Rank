// The Full Counting Sorting 

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // Dynamic Initiallization is very important
    int* a = NULL;
    a = new int[n];
    string* s = NULL;
    s = new string[n];

    for (int i = 0; i < n; i++){
        cin >> a[i];
        cin >> s[i];
    }
    
    for (int i = 0; i < n/2; i++){
        s[i] = "-";
    }
    
    int f[100];
    for (int i = 0; i < 100; i++){
        f[i] = 0;
    }
    
    for (int i = 0; i < 100; i++){
        for (int j = 0; j < n; j++){
            if(a[j] == i){
                // cout << a[j];
                cout << s[j] << " ";
            }
        }
        // cout << "\n";
    }
    
    return 0;
    
}