// Forming a Magic Square (2/10)
#include <bits/stdc++.h>
using namespace std;

int diagSum(int a[3][3], int n, int m){
    int c = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if(i ==j)
            c += a[i][j];
        }
    }
    return c;
}
int rowSum(int a[3][3], int n, int m){
    int c = 0;
    for (int i = 0; i < 3; i++)
    {
        c += a[n][i];
    }
    return c;
}
int colSum(int a[3][3], int n, int m){
    int c = 0;
    for (int i = 0; i < 3; i++)
    {
        c += a[i][m];
    }
    return c;
}
int max(int a[3][3], int n, int m){
    int max=0;
    for (int i = 0; i < 3; i++)
    {
        if(a[n][i] > max)
        max = a[n][i];
    }
    return max;
}

int main(){
    int s[3][3];
    
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cin >> s[i][j];
        }
    }
    
    int row=0, col=0, diag=0, cash = 0, total = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            col = colSum(s, i, j);
            row = rowSum(s, i, j);
            
            if(i == j)
            {
                diag = diagSum(s, i, j);
                if(diag != 15 && row !=15 && col != 15)
                {
                    cash = abs(15 - row);
                    total += cash;
                    // cout << "---------" << cash << "------\n";
                    s[i][j] += (15 - row);
                    break;
                    // int prev = s[i][j];
                    // s[i][j] += (15-row);
                    // cash = abs(prev-s[i][j]);
                }
            }
            else
            {
                if(col != 15 && row !=15)
                {
                    cash = abs(15 - row);
                    total += cash;
                    // cout << "---------" << cash << "------\n";
                    s[i][j] += (15 - row);
                    break;
                    // int prev = s[i][j];
                    // s[i][j] += (15-row);
                    // cash = abs(prev-s[i][j]);
                }
            }
        }
    }

    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout << s[i][j] << " ";
    //     }
    //     cout << "\n";
    // }
    cout << total;
    
    return 0;

}