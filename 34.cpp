// Utopian Tree
#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    for (int io = 0; io < T; io++)
    {
        int n;
        cin >> n;
        n = n +1;

        int a[n];

        for (int i = 0; i < n; i++) {
            a[i] = 0;
        }
        
        int sum = 1;
        a[0] = sum;

        for (int i = 1; i < n; i++)
        {
            if(i%2 != 0){
                sum *= 2;
                a[i] = sum;
            }
            else{
                sum += 1;
                a[i] = sum;
            }
        }

        // for (int i = 0; i < n; i++) {
        //     cout << a[i] << " , ";
        // }
        
        cout << a[n-1] << endl;
    }
    return 0;
}