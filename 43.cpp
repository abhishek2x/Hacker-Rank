// Sequence Equation
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    int x = 1;
    int ind = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(a[j] == x)
            {
                ind = j;
                break;
            }
        }
        // cout << "--" << ind << "--\n";
        for (int j = 0; j < n; j++)
        {
            if(a[j] == ind+1)
            {
                cout << j+1 << endl;
                break;
            }
        }
        x++;
    }
    
    return 0;
}