// 24/33 test cases failed :(

#include <bits/stdc++.h>
using namespace std;

int S(int x, int y){
    return ((x & y) ^ (x | y) & (x ^ y));
}

// int solver(int a, int n){
//     int result = 0;
//     stack<int> s;

//     for (int n : a)
//     {
//         while(s.empty() == false)
//         {
//             result = max(result, S(n, s.top()));
            
//             if(n < s.top())
//                 s.pop();
//             else
//                 break;
//         }
//         s.push(n);
//     }
//     return result;
// }

int main(){
    int n;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    int result = 0;
    stack<int> s;

    for (int n : a)
    {
        while(s.empty() == false)
        {
            result = max(result, S(n, s.top()));
            
            if(n < s.top())
                s.pop();
            else
                break;
        }
        s.push(n);
    }
    cout << result;
    return 0;
}