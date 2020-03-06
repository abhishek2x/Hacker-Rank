#include <bits/stdc++.h>
using namespace std;

// int compare(int a, int b){
//     if(a > b) return b;
//     else return a;
// }

int main(){
    int N;
    cin >> N;
    int A[N];
    int B[N];
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < N; i++)
    {
        B[i] = A[N-i-1];
    }
        

    for (int i = 0; i < N; i++)
    {
        cout << B[i] << " ";
    }
    
    
    return 0;
}