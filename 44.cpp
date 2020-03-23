//  Finding Digit
#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        long long int n;
        cin >> n;

        int a = 0;
        int c = 0;
        long long int m = n;

        while(n!=0){
            a = n%10;
            
            if(a > 0){
                if(m%a == 0)
                    c++;
            }

            n = n/10;
        }
        cout << c << endl;
    }
    return 0;
}