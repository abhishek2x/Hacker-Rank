// Lisa's Workbook
// Bhakkkkkkkkkkkk
#include <bits/stdc++.h>
using namespace std;

int main(){
    
    ios :: sync_with_stdio(false);
    cin.tie(0);

    int n, k;
    cin >> n >> k;

    int* a = NULL;
    a = new int[n];

    for (int in = 0; in < n; in++){
        cin >> a[in];
    }

    int D[100][100];

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            D[i][j] = 0;
        }      
    }

    int t = 0; 

    for (int i = 0; i < n; i++)
    {
        int v = a[i];
        int o = k;
        for (int j = 0; j < n; j++)
        {
            if(v> 0)
            {
                if(v >= k) {
                    D[i][j] = o;
                    o += k;
                }
                else 
                    D[i][j] = a[i];

                v -= k;
            } 
        }
    }

    int c = 0;
    int page = 1;
    int u;
    // i represents chapter
    for (int i = 0; i < 100; i++)
    {
        // j represents pages
        for (int j = 0; j < 100 && D[i][j] != 0; j++)
        {
            if(j == 0)
                u = 0;
            else u = D[i][j-1];
            
            // Making range
                if(page <=D[i][j] && page > u)
                {
                    c++;
                    // cout << "\n--" << page << "--\n";
                }
            page++;
        }
    }
    
    cout << c;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n && D[i][j] != 0; j++){
            cout << D[i][j] << " ";
        }      
        cout << "\n";
    }
    
    return 0;
}
