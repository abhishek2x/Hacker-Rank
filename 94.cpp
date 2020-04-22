//  Grid System
// Not tested
#include <bits/stdc++.h>
using namespace std;

int main(){

    ios :: sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;

    for (int w = 0; w < T; w++){
        int R, C;
        cin >> R >> C;
        int G[R][C];

        for (int i = 0; i < R; i++){
            for (int j = 0; j < C; j++){
                cin >> G[i][j];
            }
        }

        int r, c;
        cin >> r >> c;
        int P[r][c];

        for (int i = 0; i < r; i++){
            for (int j = 0; j < c; j++){
                cin >> P[i][j];
            }
        }

        int test[r][c];
        for (int i = 0; i < r; i++){
            for (int j = 0; j < c; j++){
                test[i][j] = -1;
            }
        }
        
        int flag = 0;
        int row=0, col=0;

        for (int i = 0; i < R; i++){
            for (int j = 0; j < C; j++){
                
                flag = 0;
                row = 0;
                col = 0;

                for (int k = i; k < i+r; k++) {
                    for (int l = j; l < j+c; l++){
                        if(test[row++][col++] == P[k][l]){
                            flag = 1;
                        } else {
                            flag = 0;
                        }
                    }
                }
                  
                // for (int k = i; k < i+r; k++) {
                //     for (int l = j; l < j+c; l++){
                //         if(test[row++][col++] == P[i][j])
                //         {
                //             flag =1;
                //         }
                //     }
                // }

                // if(flag == 1)
                //     break;
            }
            // if(flag == 1)
            //     break;
        }
        
        if(flag == 1)
            cout << "YES" << endl;
        else if(flag == 0)
            cout << "NO" << endl;
    }
    return 0;
}
