// Happy Ladybugs

#include <bits/stdc++.h>
using namespace std;

int getFreq(char a[], int n, int num){
    int f = 0;
    for (int i = 0; i < n; i++){
        if(a[i] == num)
        f++;
    }
    return f;   
}

bool checkOkay(char a[], int n){
    int p = 0;
    for (int i = 1; i < n-1; i++){
        if( (a[i] == a[i-1]) || (a[i] == a[i+1]) )
            p++;
    }
    if(p == n-2)
        return true;
    else return false;
}

int main()
{
    int g;
    cin >> g;

    for (int i = 0; i < g; i++)
    {
        int n;
        cin >> n;

        char a[n];
        for (int j = 0; j < n; j++){
            cin >> a[j];
        }

        int us = 0;
        int flag = 0;
        int freq;

        for (int j = 0; j < n; j++){
            if( a[j] != '_' ){
                freq = getFreq(a, n, a[j]);
                if( freq == 1) {
                    cout << "NO" << endl;
                    flag = 1;   
                    break;
                }
                us++;
            }
        }

        if( flag == 0 ) {   
            if(us == n) { 
                if( checkOkay(a, n) == true) {
                    cout << "YES" << endl;
                    flag = 1;
                }
                else {
                    cout << "NO" << endl;
                    flag = 1; 
                }
                
            }
        }

        if( flag == 0)
        cout << "YES" << endl;
    }

    return 0;
}