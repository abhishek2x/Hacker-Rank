// Ice Cream Parlor

#include <bits/stdc++.h>
using namespace std;

void getAns(int *p, int n, int sum){
    int f = 0;
    // int a, b;
    for (int i = 0; i < n; i++)  
    {
        for (int j = i+1; j < n; j++)  
        {
            if(p[i]+p[j] == sum){
                int f = 1;
                cout << i+1 << " " << j+1 << endl;
                return;
            }
        }
        // if(f == 1) break;
    }
}

int main(){
    int T;
    cin >> T;
    for (int j = 0; j < T; j++){
        int m, n;
        cin >> m >> n;
        
        int *a = NULL;
        a = new int[n];

        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        getAns(a, n, m);
    }
    return 0;
}