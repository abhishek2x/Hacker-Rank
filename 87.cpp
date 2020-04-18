// Closest Number

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int* a = NULL;
    a = new int[n];

    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    
    sort(a, a+n);

    int min = a[1] - a[0];
    int o = 0;
    for (int i = 0; i < n-1; i++)
    {
        if(a[i+1]-a[i] <= min)
            min = a[i+1] - a[i];
    }
    
    // cout << endl << min << endl;
    
    for (int i = 0; i < n; i++)
    {
        if((a[i+1] - a[i]) == min)
        cout << a[i] << " " << a[i+1] << " ";
    }
    return 0;
}
