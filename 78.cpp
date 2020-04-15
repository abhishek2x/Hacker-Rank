// Insertion Sorting - Part -1

// 5
// 2 4 6 8 3

// 2 4 6 8 8 
// 2 4 6 6 8 
// 2 4 4 6 8 
// 2 3 4 6 8 

#include <bits/stdc++.h>
using namespace std;

void InsertionPlay(int a[], int n)
{
    int value = a[n-1];
    int v = a[0];
    int f = 1;
    while(a[n-1-f] > value)
    {
        if((n-1-f) < 0)
            break;
        a[n-f] = a[n-1-f];

        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
        f++;
    }
    // cout << endl;
    a[n-f] = value;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    InsertionPlay(a, n);
    return 0;
}
