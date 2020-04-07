// Caesar Cipher
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    char a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    int k;
    cin >> k;
    
    for (int i = 0; i < n; i++)
    {
        int t = 0;
        char ch = a[i];
        int p = ch;

        if(p >= 65 && p <= 90){
            t = 1;
        } else if (p >= 97 && p <= 122){
            t = 2;
        }
        // incrementing value
        if(t != 0){
            if((p >= 65 && p <= 90) || (p >= 90 && p <= 122)){
                p += k;
            }
        }

        if(t == 2){
            while(p > 122 && p <= 122+k){
                p -= 26;
            }
        }

        if(t == 1){
            while(p > 90 && p <= 90+k){
                p -= 26;
            }
        }
        cout << (char)p;
    }
    return 0;
}