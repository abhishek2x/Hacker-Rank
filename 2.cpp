#include <bits/stdc++.h>
using namespace std;

int main(){
    int n = 6;
    int a[n][n];
    
    for(int i = 0; i<n; i++){
        for (int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }

    int lar=0;
    int largest = 0;

    for(int i = 0; i<n; i++){
        for (int j = 0; j < n; j++){
            lar = 0;
            if(i+2 <= n-1 && j+2 <= n-1)
            {


                lar = a[i][j] +a[i][j+1] +a[i][j+2] +                     // first row
                a[i+2][j] +a[i+2][j+1] +a[i+2][j+2]                      // last row
                     +a[i+1][j+1];                                      // middle element


                if(lar > largest) 
                    largest = lar;
            }
        }
    }

    cout << largest;

    return 0;

}