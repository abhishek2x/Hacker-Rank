// Lily's Homework
// Don't Remember
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

    int s = 0;
    for (int i = 1; i < n; i++)
    {
        int value = a[i];
        int hole = i-1;


        if(hole >= 0 && value < a[hole])
            s++;
        while(hole >= 0 && value < a[hole])
        {
            a[hole+1] = a[hole];
            hole--;
        }

        a[hole+1] = value;
        
    }
    cout << s;
    return 0;
}