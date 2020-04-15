// Encryption

#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin, s);

    double n = sqrt(s.length());
    double c = ceil(sqrt(s.length()));


    int p, q;
    
    if(n == c){
        p = n;
        q = n;
    }
    else{
        p = n;
        q = n+1;
    }

    if(p*q < s.length())
        p++;

    int mod = s.length()%p;
    // cout << p <<  " " << q;
    int temp = 0;
    char a[p][q];

        for (int i = 0; i < p; i++)
        {
            for (int j = 0; j < q; j++)
            {
                if(i == p-1 && q == mod)
                    break;
                a[i][j] = s[temp++];
                // cout << a[i][j];
            }
            // cout << "\n";
        }

        for (int i = 0; i < q; i++)
        {
            for (int j = 0; j < p; j++)
            {
                if(temp > 0)
                {
                    int k = a[j][i];
                    if(k >=97 && k <= 122)
                    cout << a[j][i];
                    temp--;
                }
            }
            cout << " ";
        }
        
    return 0;
}

