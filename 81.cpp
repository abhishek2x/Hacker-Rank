// Correctness and the Loop Invariant

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    
    for (int i = 1; i < n; i++)
    {
        int value = a[i];
        int hole = i-1;

        while(hole >= 0 && value < a[hole])
        {
            a[hole+1] = a[hole];
            hole--;
        }

        a[hole+1] = value;
    }

        for (int k = 0; k < n; k++)
        {
            cout << a[k] << " ";
        }
    return 0;
}