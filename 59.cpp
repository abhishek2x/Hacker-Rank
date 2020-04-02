// Cavity Map
// 10/23 test cases failed :(


#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin >> n;
    
    char c[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> c[i][j];
        }      
    }
    
                       
    int a[n][n];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            a[i][j] = c[i][j] - 48;
        }
    }

    bool bo ;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i != 0 && j != 0 && i != n-1 && j != n-1)
            {
                int k = a[i][j];
                if(k > a[i+1][j] && k > a[i][j+1] && k > a[i-1][j] && k > a[i][j-1])
                    bo = true;
                else bo = false;

                if(bo == true)
                {
                    a[i][j] = -99;
                }
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(a[i][j] == -99)
            cout << "X";
            else
            cout << a[i][j];
        }
        cout << endl;
    }
    
    return 0;
    
}
