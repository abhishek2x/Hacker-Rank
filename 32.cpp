// Climbing the Leaderboard
// yet to do

// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;
    
//     int scores[n];
//     for (int i = 0; i < n; i++){
//         cin >> scores[i];
//     }
    
//     int m;
//     cin >> m;

//     int alice[m];
//     for (int i = 0; i < m; i++){
//         cin >> alice[i];
//     }

//     int rank = 1;
//     int t = scores[0];

//     for (int j = 0; j < m; j++)
//     {
//         int check = alice[j];
//         int t = scores[0];
//         rank = 1;
//         for (int i = 0; i < n; i++)
//         {
//             if(t != scores[i])
//             {
//                 rank++;                
//                 // cout << rank << ", " << scores[i] << "\n";
//                 t = scores[i];
//             }
//             if(i < n-1)
//             {
//                 if((scores[i] >= check) && (scores[i+1] <= check))
//                 {
//                     cout << rank << endl;
//                     break;
//                 }
//             } 
//             else
//             {
//                 cout << rank << endl;
//                 break;
//             }
            
//         }
//     }

//     return 0;
    
// }