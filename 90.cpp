// Insertion Sort Advanced Analysis

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    for (int w = 0; w < T; w++)
    {    
        int n;
        cin >> n;

        int* a = NULL;
        a = new int [n];

        for (int i = 0; i < n; i++){
            cin >> a[i];
        }

        int s = 0;
        
        for (int i = 1; i < n; i++)
        {
            int value = a[i];
            int hole = i-1;

            while(hole >= 0 && value < a[hole])
            {
                a[hole+1] = a[hole];
                s++;
                hole--;
            }

            a[hole+1] = value;
            
        }
        cout << s << "\n";
    }

    return 0;
}
