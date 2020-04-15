// Insertion Sort - Part 2

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
// 6
// 1 4 3 5 6 2

// 1 4 3 5 6 2 
// 1 3 4 5 6 2 
// 1 3 4 5 6 2 
// 1 3 4 5 6 2 
// 1 2 3 4 5 6 

    
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

        for (int k = 0; k < n; k++)
        {
            cout << a[k] << " ";
        }
        cout << endl;
        
    }
    return 0;
}